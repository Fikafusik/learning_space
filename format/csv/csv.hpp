#pragma once

#include <vector>
#include <string>

#include "record.hpp"

namespace format::csv {

class csv_t {
public:
    csv_t();
    csv_t(const std::string& csv_data, bool headers = false, char comma = ',', char dquote = '\"');

    std::size_t rows() const;
    std::size_t columns() const;

    static std::string get_mime_type();
private:
    record_t m_headers;
    std::vector<record_t> m_rows; 
};

}; // namespace format::csv
