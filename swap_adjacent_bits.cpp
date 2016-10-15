int swap_adjacentbits(int n)
{
  // Input : 00110110
  // Output: 00111001
  int even_bits = n & 0xAAAAAAAA;
  int odd_bits  = n & 0x55555555;
  return ( even_bits >> 1 ) | ( odd_bits << 1 ) ;
}
