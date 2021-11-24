#pragma once

#include "quotes_policy.hpp"

namespace format::csv {

class record_t;
class csv_t;

class writer_t {
public:
    writer_t(const quotes_policy_t quotes_policy);

    void write_csv(csv_t);
    void write_record(record_t);
private:
    
};

}; // namespace format::csv
