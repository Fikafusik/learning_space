#pragma once

#include <vector>

namespace format::csv {

class record_t {
public:
    std::size_t size() const;
    
private:
    std::vector<record_t> m_values; 
};

}; // namespace format::csv