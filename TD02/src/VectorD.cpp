#include "VectorD.hpp"
#include <cstddef>
#include <iostream>

VectorD::VectorD(const VectorD &v) { m_data = v.m_data; }

void VectorD::display() const {
  for (const double element : m_data)
    std::cout << element << "\n";
}

size_t VectorD::dot(const VectorD &v) const {
  size_t result = 0;
  for (size_t i = 0; i < m_data.size(); i++)
    result += m_data[i] * v.m_data[i];
  return result;
}

VectorD &VectorD::operator=(const VectorD &v) {
  if (this == &v)
    return *this;
  m_data = v.m_data;
  return *this;
}
