#pragma once
#include <cstddef>
#include <vector>

class VectorD {

public:
  VectorD(const size_t size = 0, const double value = 0.0)
      : m_data(size, value) {}
  VectorD(const VectorD &v);
  ~VectorD() = default;

  // methods
  void display() const;
  size_t dot(const VectorD &v) const;
  double norm() { return std::sqrt(this->dot(*this)); }
  VectorD &operator=(const VectorD &v);
 
private:
  std::vector<double> m_data;
};