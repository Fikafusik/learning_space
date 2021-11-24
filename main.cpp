
#include <iostream>
#include <vector>
#include <string>

#include "format/csv/csv.hpp"
#include "format/csv/reader.hpp"


std::string csv1 = "aaa,\"bbb\",ccc\n\rzzz,yyy,xxx\n\r";
std::string csv2 = "aaa,\"bbb\",ccc\n\rzzz,yyy,xxx";
std::string csv3 = "field_name,field_name,field_name\n\raaa,\"bbb\",ccc\n\rzzz,yyy,xxx\n\r";
std::string csv4 = "field_name,field_name,field_name";
std::string csv5 = "\"aaa\",\"bbb\",\"ccc\"\n\rzzz,yyy,xxx";
std::string csv6 = "\"aaa\",\"b\n\rbb\",\"ccc\"\n\rzzz,yyy,xxx";
std::string csv7 = "\"aaa\",\"b\"\"bb\",\"ccc\"";

/*
    string.join(',') -> std::vector<std::string>
    for (const auto& string : strigs) {

    }
*/
void parse_csv(const std::string& str) {
    constexpr char CR = '\n';
    constexpr char LF = '\r';
    constexpr char DQ = '\"';
    constexpr char COMMA = ',';

    size_t pos = 0;
    size_t rows = 0;
    std::string token;
    while (pos < str.length()) {
        if (str[pos] == DQ) {
            auto next_dq = str.find(DQ, pos + 1);
            if (next_dq != std::string::npos) {
                token = str.substr(pos + 1, next_dq - pos - 1);
                pos = next_dq;
            } else {
                throw std::overflow_error("unexpected end of csv");
            }
        } else if (str[pos] == CR) {
            if (pos + 1 < str.length() && str[pos + 1] == LF) {
                pos += 1;
                rows += 1;
                token = "";
            }
        } else if (str[pos] == COMMA) {
            token = "";
        } else {
            token += str[pos];
        }

        pos += 1;

        std::cout << "last token  : " << token << std::endl;
        std::cout << "rows        : " << rows << std::endl;
        std::cout << "current pos : " << pos << std::endl;
    }
}

/*
    csv: "a"b"CRLFc" -> a"b"c 
*/
void parse_csv2(const std::string& csv_data, bool headers = false, char comma = ',', char dquote = '\"') {
    size_t position = 0;
    
    // escaped
    if (csv_data[position] == dquote) {
        size_t dquotes = 1;
        size_t escaped_begin = position + 1;
        size_t escaped_end = position + 1;
        while (true) {
            if (csv_data[escaped_end] == dquote) {
                ++dquotes;
                bool dquotes_even = (dquotes % 2 == 0);
                bool dquotes_eof = (escaped_end == csv_data.length());
                bool dquotes_comma = (escaped_end + 1 < csv_data.length() && csv_data[escaped_end + 1] == comma);
                bool dquotes_crlf = (escaped_end + 2 < csv_data.length() && csv_data[escaped_end + 1] == '\n' && csv_data[escaped_end + 2] == '\r');
                if (dquotes_even && (dquotes_eof || dquotes_comma || dquotes_crlf)) {
                    size_t token_length = escaped_end - escaped_begin;
                    std::cout << "dquotes parsed: [" << csv_data.substr(escaped_begin, token_length) << "]" << std::endl;
                }
            }
            ++escaped_end;
        }
    }

    // non-escaped
}

int main() {
    format::csv::reader_t reader;
    format::csv::csv_t csv = reader.read_csv();

    std::cout << csv.rows() << std::endl;
    std::cout << csv.columns() << std::endl;

    parse_csv(csv1);
    
    return 0;
}