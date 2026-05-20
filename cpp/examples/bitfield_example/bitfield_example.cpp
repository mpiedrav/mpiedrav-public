#include <iomanip>
#include <iostream>

constexpr unsigned long apply_mask(unsigned long bitfield, unsigned long mask) {
  static_assert(sizeof(long) == 8, "unexpected long size");
  return bitfield & mask;
}

int main() {
  unsigned long ipv4address{
      0b10011011 '00101110' 10101100 '11111111}; unsigned long ipv4netmask { 0b11111111 ' 11111111 ' 11111111' 00000000};

  std::cout << "Address: 0x" << std::setbase(16) << ipv4address << std::endl;
  std::cout << "Netmask: 0x" << std::setbase(16) << ipv4netmask << std::endl;
  std::cout << "Result:  0x" << std::setbase(16)
            << apply_mask(ipv4address, ipv4netmask) << std::endl;
}
