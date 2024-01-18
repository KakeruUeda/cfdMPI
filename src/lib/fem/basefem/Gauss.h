

#include <cstdio>

class Gauss{
public:
	Gauss(){}
	Gauss(const int num){
		switch(num){
			case 2:
	  		point[0] = -0.577350296189626; point[1] =  0.577350296189626;
      	weight[0] = 1e0;							 weight[1] = 1e0;
      	break;
      case 3:
      	point[0] = -0.774596669241483; point[1] = 0e0; point[2] = 0.774596669241483;
      	weight[0] = 0.555555555555555; weight[1] = 0.888888888888888; weight[2] = 0.555555555555555;
      	break;
      case 4:
      	point[0] = -0.861135311594053;  point[1] = -0.339981043584856; point[2] = 0.339981043584856;  point[3] = 0.861135311594053;
      	weight[0] = 0.347854845137454;  weight[1] = 0.652145154862546; weight[2] = 0.652145154862546; weight[3] = 0.347854845137454;
        break;
      case 5:
      	point[0] = -0.90617;  point[1] = -0.53846; point[2] = 0e0;  point[3] = 0.53846; point[4] = 0.90617; 
      	weight[0] = 0.23692;  weight[1] = 0.47862; weight[2] = 0.56888; weight[3] = 0.47862; weight[4] = 0.23692;
      case 6:
        point[0] = -0.932469514203152;  point[1] = -0.661209386466265;  point[2] = -0.238619186083197; point[3] = 0.238619186083197; point[4] = 0.661209386466265; point[5] = 0.932469514203152;
        weight[0] = 0.171324492379170;  weight[1] = 0.360761573048139; weight[2] = 0.467913934572691; weight[3] =  0.467913934572691; weight[4] =  0.360761573048139; weight[5] = 0.171324492379170;
      case 7:
        point[0] = -0.9491079123427585;  point[1] = -0.7415311855993945;  point[2] = -0.4058451513773972; point[3] = 0.0000000000000000; point[4] = 0.4058451513773972; point[5] = 0.7415311855993945; point[6] = 0.9491079123427585; 
        weight[0] = 0.1294849661688697;  weight[1] = 0.2797053914892766; weight[2] = 0.3818300505051189; weight[3] =  0.467913934572691; weight[4] =  0.3818300505051189; weight[5] = 0.2797053914892766; weight[6] = 0.1294849661688697;
      case 20:
        point[0] = -0.9931285991850949;  point[1] = -0.9639719272779138;  point[2] = -0.9122344282513259; point[3] = -0.8391169718222188; point[4] = -0.7463319064601508; point[5] = -0.6360536807265150; point[6] = -0.5108670019508271;
        point[7] = -0.3737060887154195;  point[8] = -0.2277858511416451;  point[9] = -0.0765265211334973; point[10] = 0.0765265211334973; point[11] = 0.2277858511416451;  point[12] = 0.3737060887154195;  point[13] = 0.5108670019508271;
        point[14] = 0.6360536807265150; point[15] = 0.7463319064601508; point[16] = 0.8391169718222188; point[17] = 0.9122344282513259; point[18] = 0.9639719272779138; point[19] = 0.9931285991850949;
        
        weight[0] = 0.0176140071391521;  weight[1] = 0.0406014298003869; weight[2] = 0.0626720483341091; weight[3] = 0.0832767415767048; weight[4] =  0.1019301198172404; weight[5] = 0.1181945319615184; weight[6] = 0.1316886384491766;
        weight[7] = 0.1420961093183820;  weight[8] = 0.1491729864726037; weight[9] = 0.1527533871307258; 
        weight[19] = 0.0176140071391521;  weight[18] = 0.0406014298003869; weight[17] = 0.0626720483341091; weight[16] = 0.0832767415767048; weight[15] =  0.1019301198172404; weight[14] = 0.1181945319615184; weight[13] = 0.1316886384491766;
        weight[12] = 0.1420961093183820;  weight[11] = 0.1491729864726037; weight[10] = 0.1527533871307258; 
      case 30: 
        point[0] = -0.9968934840746495;  
        point[1] = -0.9836681232797472;
        point[2] = -0.9600218649683075;
        point[3] = -0.9262000474292743;
        point[4] = -0.8825605357920527;
        point[5] = -0.8295657623827684;
        point[6] = -0.7677774321048262;
        point[7] = -0.6978504947933158;
        point[8] = -0.6205261829892429;
        point[9] = -0.5366241481420199;
        point[10] = -0.4470337695380892;
        point[11] = -0.3527047255308781;
        point[12] = -0.2546369261678899;
        point[13] = -0.1538699136085835;
        point[14] = -0.0514718425553177;
        point[29] = 0.9968934840746495;
        point[28] = 0.9836681232797472;
        point[27] = 0.9600218649683075;
        point[26] = 0.9262000474292743;
        point[25] = 0.8825605357920527;
        point[24] = 0.8295657623827684;
        point[23] = 0.7677774321048262;
        point[22] = 0.6978504947933158;
        point[21] = 0.6205261829892429;
        point[20] = 0.5366241481420199;
        point[19] = 0.4470337695380892;
        point[18] = 0.3527047255308781;
        point[17] = 0.2546369261678899;
        point[16] = 0.1538699136085835;
        point[15] = 0.0514718425553177;

        weight[0] =  0.0079681924961666;
        weight[1] =  0.0184664683110910;
        weight[2] =  0.0287847078833234;
        weight[3] =  0.0387991925696271;
        weight[4] =  0.0484026728305941;
        weight[5] =  0.0574931562176191;
        weight[6] =  0.0659742298821805;
        weight[7] =  0.0737559747377052;
        weight[8] =  0.0807558952294202;
        weight[9] =  0.0868997872010830;
        weight[10] = 0.0921225222377861;
        weight[11] = 0.0963687371746443;
        weight[12] = 0.0995934205867953;
        weight[13] = 0.1017623897484055;
        weight[14] = 0.1028526528935588;
        weight[29] = 0.0079681924961666;
        weight[28] = 0.0184664683110910;
        weight[27] = 0.0287847078833234;
        weight[26] = 0.0387991925696271;
        weight[25] = 0.0484026728305941;
        weight[24] = 0.0574931562176191;
        weight[23] = 0.0659742298821805;
        weight[22] = 0.0737559747377052;
        weight[21] = 0.0807558952294202;
        weight[20] = 0.0868997872010830;
        weight[19] = 0.0921225222377861;
        weight[18] = 0.0963687371746443;
        weight[17] = 0.0995934205867953;
        weight[16] = 0.1017623897484055;
        weight[15] = 0.1028526528935588;

        case 31:
        point[0] = -0.9970874818194770;
        point[1] = -0.9846859096651525;
        point[2] = -0.9625039250929497;
        point[3] = -0.9307569978966481;
        point[4] = -0.8897600299482711;
        point[5] = -0.8399203201462674;
        point[6] = -0.781733148416624;
        point[7] = -0.7157767845868532;
        point[8] = -0.6427067229242603;
        point[9] = -0.5632491614071493;
        point[10] = -0.4781937820449025;
        point[11] = -0.3883859016082329;
        point[12] = -0.2947180699817016;
        point[13] = -0.1981211993355706;
        point[14] = -0.0995553121523415;
        point[30] = 0.9970874818194770;
        point[29] = 0.9846859096651525;
        point[28] = 0.9625039250929497;
        point[27] = 0.9307569978966481;
        point[26] = 0.8897600299482711;
        point[25] = 0.8399203201462674;
        point[24] = 0.781733148416624;
        point[23] = 0.7157767845868532;
        point[22] = 0.6427067229242603;
        point[21] = 0.5632491614071493;
        point[20] = 0.4781937820449025;
        point[19] = 0.3883859016082329;
        point[18] = 0.2947180699817016;
        point[17] = 0.1981211993355706;
        point[16] = 0.0995553121523415;
        point[15] = 0.0000000000000000;

        weight[0] =  0.0074708315792488;
        weight[1] =  0.0173186207903106;
        weight[2] =  0.0270090191849794;
        weight[3] =  0.0364322739123855;
        weight[4] =  0.0454937075272011;
        weight[5] =  0.0541030824249169;
        weight[6] =  0.0621747865610284;
        weight[7] =  0.0696285832354104;
        weight[8] =  0.0763903865987766;
        weight[9] =  0.0823929917615893;
        weight[10] = 0.0875767406084779;
        weight[11] = 0.0918901138936415;
        weight[12] = 0.0952902429123195;
        weight[13] = 0.0977433353863287;
        weight[14] = 0.0992250112266723;
        weight[30] = 0.0074708315792488;
        weight[29] = 0.0173186207903106;
        weight[28] = 0.0270090191849794;
        weight[27] = 0.0364322739123855;
        weight[26] = 0.0454937075272011;
        weight[25] = 0.0541030824249169;
        weight[24] = 0.0621747865610284;
        weight[23] = 0.0696285832354104;
        weight[22] = 0.0763903865987766;
        weight[21] = 0.0823929917615893;
        weight[20] = 0.0875767406084779;
        weight[19] = 0.0918901138936415;
        weight[18] = 0.0952902429123195;
        weight[17] = 0.0977433353863287;
        weight[16] = 0.0992250112266723;
        weight[15] = 0.0997205447934265;
      break;
      default:
      	printf("undefined order is set in the gauss integral\n");
		}
	}
  double point[31],weight[31];
};

//caution! Below is the position of natural coordinates (L0,L1,L2,L3)
class GaussTetra{
public:
	GaussTetra(){}
	GaussTetra(const int num){
    double a;
		switch(num){
			case 1:
	  		point[0][0] = 2.5e-1; point[0][1] = 2.5e-1; point[0][2] = 2.5e-1; point[0][3] = 2.5e-1;
      	weight[0] = 1e0;
      	break;
      case 2:
        a=0.13819660;
	  		point[0][0] = 1e0-2e0*a; point[0][1] = a; point[0][2] = a; point[0][3] = a;
	  		point[1][0] = a; point[1][1] = 1e0-2e0*a; point[1][2] = a; point[1][3] = a;
	  		point[2][0] = a; point[2][1] = a; point[2][2] = 1e0-2e0*a; point[2][3] = a;
	  		point[3][0] = a; point[3][1] = a; point[3][2] = a; point[3][3] = 1e0-2e0*a;
      	weight[0] = 2.5e-1;weight[1] = 2.5e-1;weight[2] = 2.5e-1;weight[3] = 2.5e-1;
      	break;
      case 3:
	  		point[0][0] = 2.5e-1; point[0][1] = 2.5e-1; point[0][2] = 2.5e-1; point[0][3] = 2.5e-1;
	  		point[1][0] = 5e-1;    point[1][1] = 1e0/6e0; point[1][2] = 1e0/6e0; point[1][3] = 1e0/6e0;
	  		point[2][0] = 1e0/6e0; point[2][1] = 5e-1;    point[2][2] = 1e0/6e0; point[2][3] = 1e0/6e0;
	  		point[3][0] = 1e0/6e0; point[3][1] = 1e0/6e0; point[3][2] = 5e-1;    point[3][3] = 1e0/6e0;
	  		point[4][0] = 1e0/6e0; point[4][1] = 1e0/6e0; point[4][2] = 1e0/6e0; point[4][3] = 5e-1;
      	weight[0] = -8e-1;weight[1] = 9e0/20e0;weight[2] = 9e0/20e0;weight[3] = 9e0/20e0;weight[4] = 9e0/20e0;
      break;
      default:
      	printf("undefined order is set in the gauss integral\n");
		}
	}
  double point[5][4],weight[5];
};

class GaussTriangle{
public:
  GaussTriangle(){}
  GaussTriangle(const int num){
    switch(num){
      case 1:
        point[0][0] = 1e0/3e0; point[0][1] = 1e0/3e0; point[0][2] = 1e0/3e0;
        weight[0] = 1e0;
        break;
      case 2:
        point[0][0] = 0e0; point[0][1] = 5e-1; point[0][2] = 5e-1;
        point[1][0] = 5e-1; point[1][1] = 0e0;point[1][2] = 5e-1;
        point[2][0] = 5e-1; point[2][1] = 5e-1; point[2][2] = 0e0;
        weight[0] = 1e0/3e0;weight[1] = 1e0/3e0;weight[2] = 1e0/3e0;
        break;
      case 3:
        point[0][0] = 1e0/3e0;  point[0][1] = 1e0/3e0;  point[0][2] = 1e0/3e0;
        point[1][0] = 11e0/15e0;point[1][1] = 2e0/15e0; point[1][2] = 2e0/15e0;
        point[2][0] = 2e0/15e0; point[2][1] = 11e0/15e0;point[2][2] = 2e0/15e0;
        point[3][0] = 2e0/15e0; point[3][1] = 2e0/15e0; point[3][2] = 2e0/15e0;
        weight[0] = -27e0/48e0;weight[1] = 25e0/48e0;weight[2] = 25e0/48e0;weight[3] = 25e0/48e0;
      break;
      default:
        printf("undefined order is set in the gauss integral\n");
    }
  }
  double point[4][3],weight[4];
};