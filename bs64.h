// Base64 Decimals To ASCII Decimal (Convertion Array);
static const unsigned char q[64]={65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,48,49,50,51,52,53,54,55,56,57,43,47}, 
e[256]={65,65,65,65,66,66,66,66,67,67,67,67,68,68,68,68,69,69,69,69,70,70,70,70,71,71,71,71,72,72,72,72,73,73,73,73,74,74,74,74,75,75,75,75,76,76,76,76,77,77,77,77,78,78,78,78,79,79,79,79,80,80,80,80,81,81,81,81,82,82,82,82,83,83,83,83,84,84,84,84,85,85,85,85,86,86,86,86,87,87,87,87,88,88,88,88,89,89,89,89,90,90,90,90,97,97,97,97,98,98,98,98,99,99,99,99,100,100,100,100,101,101,101,101,102,102,102,102,103,103,103,103,104,104,104,104,105,105,105,105,106,106,106,106,107,107,107,107,108,108,108,108,109,109,109,109,110,110,110,110,111,111,111,111,112,112,112,112,113,113,113,113,114,114,114,114,115,115,115,115,116,116,116,116,117,117,117,117,118,118,118,118,119,119,119,119,120,120,120,120,121,121,121,121,122,122,122,122,48,48,48,48,49,49,49,49,50,50,50,50,51,51,51,51,52,52,52,52,53,53,53,53,54,54,54,54,55,55,55,55,56,56,56,56,57,57,57,57,43,43,43,43,47,47,47},
r[256]={65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,48,49,50,51,52,53,54,55,56,57,43,47,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,48,49,50,51,52,53,54,55,56,57,43,47,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,48,49,50,51,52,53,54,55,56,57,43,47,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,48,49,50,51,52,53,54,55,56,57,43},

// ASCII Decimals To Base64 Integers (<<2)(Convertion Array);
wq[123]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,248,0,0,0,252,208,212,216,220,224,228,232,236,240,244,0,0,0,0,0,0,0,0,4,8,12,16,20,24,28,32,36,40,44,48,52,56,60,64,68,72,76,80,84,88,92,96,100,0,0,0,0,0,0,104,108,112,116,120,124,128,132,136,140,144,148,152,156,160,164,168,172,176,180,184,188,192,196,200,204};

static const unsigned int ww[123]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,57347,0,0,0,61443,16387,20483,24579,28675,32771,36867,40963,45059,49155,53251,0,0,0,0,0,0,0,0,4096,8192,12288,16384,20480,24576,28672,32768,36864,40960,45056,49152,53248,57344,61440,1,4097,8193,12289,16385,20481,24577,28673,32769,36865,0,0,0,0,0,0,40961,45057,49153,53249,57345,61441,2,4098,8194,12290,16386,20482,24578,28674,32770,36866,40962,45058,49154,53250,57346,61442,3,4099,8195,12291},
we[123]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8392448,0,0,0,12586752,3328,4197632,8391936,12586240,3584,4197888,8392192,12586496,3840,4198144,0,0,0,0,0,0,0,0,4194304,8388608,12582912,256,4194560,8388864,12583168,512,4194816,8389120,12583424,768,4195072,8389376,12583680,1024,4195328,8389632,12583936,1280,4195584,8389888,12584192,1536,4195840,0,0,0,0,0,0,8390144,12584448,1792,4196096,8390400,12584704,2048,4196352,8390656,12584960,2304,4196608,8390912,12585216,2560,4196864,8391168,12585472,2816,4197120,8391424,12585728,3072,4197376,8391680,12585984},
wr[123]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4063232,0,0,0,4128768,3407872,3473408,3538944,3604480,3670016,3735552,3801088,3866624,3932160,3997696,0,0,0,0,0,0,0,0,65536,131072,196608,262144,327680,393216,458752,524288,589824,655360,720896,786432,851968,917504,983040,1048576,1114112,1179648,1245184,1310720,1376256,1441792,1507328,1572864,1638400,0,0,0,0,0,0,1703936,1769472,1835008,1900544,1966080,2031616,2097152,2162688,2228224,2293760,2359296,2424832,2490368,2555904,2621440,2686976,2752512,2818048,2883584,2949120,3014656,3080192,3145728,3211264,3276800,3342336};

static inline void bd(unsigned char z[],unsigned char u[],unsigned char *o)
{
    unsigned char *i1=z+1,*ix=z+2,*ir=z+3;
    do{*((unsigned int*)u)=wq[*z]|ww[*i1]|we[*ix]|wr[*ir];z+=4;u+=3;i1+=4;ix+=4;ir+=4;}while(z<o);
};

static inline void be(unsigned char z[],unsigned char u[],unsigned char *o)
{
    unsigned char *k1=z+1,*k2=z+2;
    do{*u=e[*z];*(u+1)=q[*k1>>4|(*z&3)<<4];*(u+2)=q[*k2>>6|(*k1&15)<<2];*(u+3)=r[*k2];u+=4;z+=3;k1+=3;k2+=3;}while(z<o);
};

static inline void bs(unsigned char z[],unsigned char u[],unsigned char *o)
{
    unsigned char *k1=z+1,*k2=z+2;
    do{*u=e[*z];*(u+1)=q[*k1>>4|(*z&3)<<4];*(u+2)=q[*k2>>6|(*k1&15)<<2];*(u+3)=r[*k2];u+=4;z+=3;k1+=3;k2+=3;}while(z<o);

    if(z>o){u[*z-1]=61;if(z-1>o){u[*z-2]=61;}}
};