# swap-bits
int main(int x)
{
int eb,ob;
//get all even bits of x
int eb=x&0xAAAAAAAA;
//get all odd bits of x
int ob=x&0x55555555;
eb=eb>>1;//right shift even bits.
ob=ob>>1;//left shift odd bits.
return(eb|ob);//combine both even and odd bits.
}
