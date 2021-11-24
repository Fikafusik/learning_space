#pragma once

namespace format::csv {

class record_t;
class csv_t;

class reader_t {
public:
    reader_t();

    csv_t read_csv();
    record_t read_record();
};

}; // namespace format::csv