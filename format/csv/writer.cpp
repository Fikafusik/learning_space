
#include "writer.hpp"

#include "record.hpp"
#include "csv.hpp"
#include "quotes_policy.hpp"

namespace format::csv {

writer_t::writer_t(const quotes_policy_t quotes_policy) {
    // pass
}

void writer_t::write_csv(csv_t) {
    // pass
}

void writer_t::write_record(record_t) {
    // pass
}

}; // namespace format::csv