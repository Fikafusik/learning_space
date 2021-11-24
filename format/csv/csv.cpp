
#include "csv.hpp"

#include "record.hpp"

namespace format::csv {

csv_t::csv_t() {
    // implement me
}

csv_t::csv_t(const std::string& csv_data, bool headers, char comma, char dquote) {
    // implement me
}

std::size_t csv_t::rows() const {
    // implement me
    return 0;
}

std::size_t csv_t::columns() const {
    // implement me
    return 0;
}

std::string csv_t::get_mime_type() {
    return "text/csv";
}

}; // namespace format::csv