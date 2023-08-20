unsigned short int expressionsMatter (unsigned short int a , unsigned short int b , unsigned short int c)
{
    // Your Code is Here .. Enjoy !!
    return std::max({a * (b + c), a * b * c, a + b * c, (a + b) * c, a + b + c, a * b + c}); 
}