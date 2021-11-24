
#include "reader.hpp"

#include "record.hpp"
#include "csv.hpp"

namespace format::csv {

reader_t::reader_t() {
    // pass
}

csv_t reader_t::read_csv() {
    // pass
    
    return csv_t{};
}

record_t reader_t::read_record() {
    // pass
    return record_t{};
}

}; // namespace format::csv