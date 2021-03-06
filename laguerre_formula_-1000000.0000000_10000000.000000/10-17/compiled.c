#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "17";

double f_if(float x) {
        float r9853965 = 1.0;
        float r9853966 = -17.0;
        float r9853967 = x;
        float r9853968 = r9853966 * r9853967;
        float r9853969 = r9853965 + r9853968;
        float r9853970 = 68.0;
        float r9853971 = r9853967 * r9853967;
        float r9853972 = r9853970 * r9853971;
        float r9853973 = r9853969 + r9853972;
        float r9853974 = -113.333333;
        float r9853975 = r9853971 * r9853967;
        float r9853976 = r9853974 * r9853975;
        float r9853977 = r9853973 + r9853976;
        float r9853978 = 99.166667;
        float r9853979 = r9853975 * r9853967;
        float r9853980 = r9853978 * r9853979;
        float r9853981 = r9853977 + r9853980;
        float r9853982 = -51.566667;
        float r9853983 = r9853979 * r9853967;
        float r9853984 = r9853982 * r9853983;
        float r9853985 = r9853981 + r9853984;
        float r9853986 = 17.188889;
        float r9853987 = r9853983 * r9853967;
        float r9853988 = r9853986 * r9853987;
        float r9853989 = r9853985 + r9853988;
        float r9853990 = -3.85873;
        float r9853991 = r9853987 * r9853967;
        float r9853992 = r9853990 * r9853991;
        float r9853993 = r9853989 + r9853992;
        float r9853994 = 0.602927;
        float r9853995 = r9853991 * r9853967;
        float r9853996 = r9853994 * r9853995;
        float r9853997 = r9853993 + r9853996;
        float r9853998 = -0.066992;
        float r9853999 = r9853995 * r9853967;
        float r9854000 = r9853998 * r9853999;
        float r9854001 = r9853997 + r9854000;
        float r9854002 = 0.005359;
        float r9854003 = r9853999 * r9853967;
        float r9854004 = r9854002 * r9854003;
        float r9854005 = r9854001 + r9854004;
        float r9854006 = -0.00031;
        float r9854007 = r9854003 * r9853967;
        float r9854008 = r9854006 * r9854007;
        float r9854009 = r9854005 + r9854008;
        float r9854010 = 1.3e-05;
        float r9854011 = r9854007 * r9853967;
        float r9854012 = r9854010 * r9854011;
        float r9854013 = r9854009 + r9854012;
        return r9854013;
}

double f_id(double x) {
        double r9854014 = 1.0;
        double r9854015 = -17.0;
        double r9854016 = x;
        double r9854017 = r9854015 * r9854016;
        double r9854018 = r9854014 + r9854017;
        double r9854019 = 68.0;
        double r9854020 = r9854016 * r9854016;
        double r9854021 = r9854019 * r9854020;
        double r9854022 = r9854018 + r9854021;
        double r9854023 = -113.333333;
        double r9854024 = r9854020 * r9854016;
        double r9854025 = r9854023 * r9854024;
        double r9854026 = r9854022 + r9854025;
        double r9854027 = 99.166667;
        double r9854028 = r9854024 * r9854016;
        double r9854029 = r9854027 * r9854028;
        double r9854030 = r9854026 + r9854029;
        double r9854031 = -51.566667;
        double r9854032 = r9854028 * r9854016;
        double r9854033 = r9854031 * r9854032;
        double r9854034 = r9854030 + r9854033;
        double r9854035 = 17.188889;
        double r9854036 = r9854032 * r9854016;
        double r9854037 = r9854035 * r9854036;
        double r9854038 = r9854034 + r9854037;
        double r9854039 = -3.85873;
        double r9854040 = r9854036 * r9854016;
        double r9854041 = r9854039 * r9854040;
        double r9854042 = r9854038 + r9854041;
        double r9854043 = 0.602927;
        double r9854044 = r9854040 * r9854016;
        double r9854045 = r9854043 * r9854044;
        double r9854046 = r9854042 + r9854045;
        double r9854047 = -0.066992;
        double r9854048 = r9854044 * r9854016;
        double r9854049 = r9854047 * r9854048;
        double r9854050 = r9854046 + r9854049;
        double r9854051 = 0.005359;
        double r9854052 = r9854048 * r9854016;
        double r9854053 = r9854051 * r9854052;
        double r9854054 = r9854050 + r9854053;
        double r9854055 = -0.00031;
        double r9854056 = r9854052 * r9854016;
        double r9854057 = r9854055 * r9854056;
        double r9854058 = r9854054 + r9854057;
        double r9854059 = 1.3e-05;
        double r9854060 = r9854056 * r9854016;
        double r9854061 = r9854059 * r9854060;
        double r9854062 = r9854058 + r9854061;
        return r9854062;
}


double f_of(float x) {
        float r9854063 = 1.0;
        float r9854064 = -17.0;
        float r9854065 = x;
        float r9854066 = r9854064 * r9854065;
        float r9854067 = r9854063 + r9854066;
        float r9854068 = 68.0;
        float r9854069 = r9854065 * r9854065;
        float r9854070 = r9854068 * r9854069;
        float r9854071 = r9854067 + r9854070;
        float r9854072 = -113.333333;
        float r9854073 = r9854069 * r9854065;
        float r9854074 = r9854072 * r9854073;
        float r9854075 = r9854071 + r9854074;
        float r9854076 = 99.166667;
        float r9854077 = r9854073 * r9854065;
        float r9854078 = r9854076 * r9854077;
        float r9854079 = r9854075 + r9854078;
        float r9854080 = -51.566667;
        float r9854081 = r9854077 * r9854065;
        float r9854082 = r9854080 * r9854081;
        float r9854083 = r9854079 + r9854082;
        float r9854084 = 17.188889;
        float r9854085 = r9854081 * r9854065;
        float r9854086 = r9854084 * r9854085;
        float r9854087 = r9854083 + r9854086;
        float r9854088 = -3.85873;
        float r9854089 = r9854085 * r9854065;
        float r9854090 = r9854088 * r9854089;
        float r9854091 = r9854087 + r9854090;
        float r9854092 = 0.602927;
        float r9854093 = r9854089 * r9854065;
        float r9854094 = r9854092 * r9854093;
        float r9854095 = r9854091 + r9854094;
        float r9854096 = -0.066992;
        float r9854097 = r9854093 * r9854065;
        float r9854098 = r9854096 * r9854097;
        float r9854099 = r9854095 + r9854098;
        float r9854100 = 0.005359;
        float r9854101 = r9854097 * r9854065;
        float r9854102 = r9854100 * r9854101;
        float r9854103 = r9854099 + r9854102;
        float r9854104 = -0.00031;
        float r9854105 = r9854101 * r9854065;
        float r9854106 = r9854104 * r9854105;
        float r9854107 = r9854103 + r9854106;
        float r9854108 = 1.3e-05;
        float r9854109 = 3;
        float r9854110 = pow(r9854065, r9854109);
        float r9854111 = 1;
        float r9854112 = r9854111 + r9854109;
        float r9854113 = pow(r9854110, r9854112);
        float r9854114 = cbrt(r9854113);
        float r9854115 = r9854114 * r9854065;
        float r9854116 = r9854115 * r9854065;
        float r9854117 = r9854116 * r9854065;
        float r9854118 = r9854117 * r9854065;
        float r9854119 = r9854118 * r9854065;
        float r9854120 = r9854119 * r9854065;
        float r9854121 = r9854120 * r9854065;
        float r9854122 = r9854121 * r9854065;
        float r9854123 = r9854108 * r9854122;
        float r9854124 = r9854107 + r9854123;
        return r9854124;
}

double f_od(double x) {
        double r9854125 = 1.0;
        double r9854126 = -17.0;
        double r9854127 = x;
        double r9854128 = r9854126 * r9854127;
        double r9854129 = r9854125 + r9854128;
        double r9854130 = 68.0;
        double r9854131 = r9854127 * r9854127;
        double r9854132 = r9854130 * r9854131;
        double r9854133 = r9854129 + r9854132;
        double r9854134 = -113.333333;
        double r9854135 = r9854131 * r9854127;
        double r9854136 = r9854134 * r9854135;
        double r9854137 = r9854133 + r9854136;
        double r9854138 = 99.166667;
        double r9854139 = r9854135 * r9854127;
        double r9854140 = r9854138 * r9854139;
        double r9854141 = r9854137 + r9854140;
        double r9854142 = -51.566667;
        double r9854143 = r9854139 * r9854127;
        double r9854144 = r9854142 * r9854143;
        double r9854145 = r9854141 + r9854144;
        double r9854146 = 17.188889;
        double r9854147 = r9854143 * r9854127;
        double r9854148 = r9854146 * r9854147;
        double r9854149 = r9854145 + r9854148;
        double r9854150 = -3.85873;
        double r9854151 = r9854147 * r9854127;
        double r9854152 = r9854150 * r9854151;
        double r9854153 = r9854149 + r9854152;
        double r9854154 = 0.602927;
        double r9854155 = r9854151 * r9854127;
        double r9854156 = r9854154 * r9854155;
        double r9854157 = r9854153 + r9854156;
        double r9854158 = -0.066992;
        double r9854159 = r9854155 * r9854127;
        double r9854160 = r9854158 * r9854159;
        double r9854161 = r9854157 + r9854160;
        double r9854162 = 0.005359;
        double r9854163 = r9854159 * r9854127;
        double r9854164 = r9854162 * r9854163;
        double r9854165 = r9854161 + r9854164;
        double r9854166 = -0.00031;
        double r9854167 = r9854163 * r9854127;
        double r9854168 = r9854166 * r9854167;
        double r9854169 = r9854165 + r9854168;
        double r9854170 = 1.3e-05;
        double r9854171 = 3;
        double r9854172 = pow(r9854127, r9854171);
        double r9854173 = 1;
        double r9854174 = r9854173 + r9854171;
        double r9854175 = pow(r9854172, r9854174);
        double r9854176 = cbrt(r9854175);
        double r9854177 = r9854176 * r9854127;
        double r9854178 = r9854177 * r9854127;
        double r9854179 = r9854178 * r9854127;
        double r9854180 = r9854179 * r9854127;
        double r9854181 = r9854180 * r9854127;
        double r9854182 = r9854181 * r9854127;
        double r9854183 = r9854182 * r9854127;
        double r9854184 = r9854183 * r9854127;
        double r9854185 = r9854170 * r9854184;
        double r9854186 = r9854169 + r9854185;
        return r9854186;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9854187, r9854188, r9854189, r9854190, r9854191, r9854192, r9854193, r9854194, r9854195, r9854196, r9854197, r9854198, r9854199, r9854200, r9854201, r9854202, r9854203, r9854204, r9854205, r9854206, r9854207, r9854208, r9854209, r9854210, r9854211, r9854212, r9854213, r9854214, r9854215, r9854216, r9854217, r9854218, r9854219, r9854220, r9854221, r9854222, r9854223, r9854224, r9854225, r9854226, r9854227, r9854228, r9854229, r9854230, r9854231, r9854232, r9854233, r9854234, r9854235;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9854187, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9854188, "-17.0", 10, MPFR_RNDN);
        mpfr_init(r9854189);
        mpfr_init(r9854190);
        mpfr_init(r9854191);
        mpfr_init_set_str(r9854192, "68.0", 10, MPFR_RNDN);
        mpfr_init(r9854193);
        mpfr_init(r9854194);
        mpfr_init(r9854195);
        mpfr_init_set_str(r9854196, "-113.333333", 10, MPFR_RNDN);
        mpfr_init(r9854197);
        mpfr_init(r9854198);
        mpfr_init(r9854199);
        mpfr_init_set_str(r9854200, "99.166667", 10, MPFR_RNDN);
        mpfr_init(r9854201);
        mpfr_init(r9854202);
        mpfr_init(r9854203);
        mpfr_init_set_str(r9854204, "-51.566667", 10, MPFR_RNDN);
        mpfr_init(r9854205);
        mpfr_init(r9854206);
        mpfr_init(r9854207);
        mpfr_init_set_str(r9854208, "17.188889", 10, MPFR_RNDN);
        mpfr_init(r9854209);
        mpfr_init(r9854210);
        mpfr_init(r9854211);
        mpfr_init_set_str(r9854212, "-3.85873", 10, MPFR_RNDN);
        mpfr_init(r9854213);
        mpfr_init(r9854214);
        mpfr_init(r9854215);
        mpfr_init_set_str(r9854216, "0.602927", 10, MPFR_RNDN);
        mpfr_init(r9854217);
        mpfr_init(r9854218);
        mpfr_init(r9854219);
        mpfr_init_set_str(r9854220, "-0.066992", 10, MPFR_RNDN);
        mpfr_init(r9854221);
        mpfr_init(r9854222);
        mpfr_init(r9854223);
        mpfr_init_set_str(r9854224, "0.005359", 10, MPFR_RNDN);
        mpfr_init(r9854225);
        mpfr_init(r9854226);
        mpfr_init(r9854227);
        mpfr_init_set_str(r9854228, "-0.00031", 10, MPFR_RNDN);
        mpfr_init(r9854229);
        mpfr_init(r9854230);
        mpfr_init(r9854231);
        mpfr_init_set_str(r9854232, "1.3e-05", 10, MPFR_RNDN);
        mpfr_init(r9854233);
        mpfr_init(r9854234);
        mpfr_init(r9854235);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9854189, x, MPFR_RNDN);
        mpfr_mul(r9854190, r9854188, r9854189, MPFR_RNDN);
        mpfr_add(r9854191, r9854187, r9854190, MPFR_RNDN);
        ;
        mpfr_mul(r9854193, r9854189, r9854189, MPFR_RNDN);
        mpfr_mul(r9854194, r9854192, r9854193, MPFR_RNDN);
        mpfr_add(r9854195, r9854191, r9854194, MPFR_RNDN);
        ;
        mpfr_mul(r9854197, r9854193, r9854189, MPFR_RNDN);
        mpfr_mul(r9854198, r9854196, r9854197, MPFR_RNDN);
        mpfr_add(r9854199, r9854195, r9854198, MPFR_RNDN);
        ;
        mpfr_mul(r9854201, r9854197, r9854189, MPFR_RNDN);
        mpfr_mul(r9854202, r9854200, r9854201, MPFR_RNDN);
        mpfr_add(r9854203, r9854199, r9854202, MPFR_RNDN);
        ;
        mpfr_mul(r9854205, r9854201, r9854189, MPFR_RNDN);
        mpfr_mul(r9854206, r9854204, r9854205, MPFR_RNDN);
        mpfr_add(r9854207, r9854203, r9854206, MPFR_RNDN);
        ;
        mpfr_mul(r9854209, r9854205, r9854189, MPFR_RNDN);
        mpfr_mul(r9854210, r9854208, r9854209, MPFR_RNDN);
        mpfr_add(r9854211, r9854207, r9854210, MPFR_RNDN);
        ;
        mpfr_mul(r9854213, r9854209, r9854189, MPFR_RNDN);
        mpfr_mul(r9854214, r9854212, r9854213, MPFR_RNDN);
        mpfr_add(r9854215, r9854211, r9854214, MPFR_RNDN);
        ;
        mpfr_mul(r9854217, r9854213, r9854189, MPFR_RNDN);
        mpfr_mul(r9854218, r9854216, r9854217, MPFR_RNDN);
        mpfr_add(r9854219, r9854215, r9854218, MPFR_RNDN);
        ;
        mpfr_mul(r9854221, r9854217, r9854189, MPFR_RNDN);
        mpfr_mul(r9854222, r9854220, r9854221, MPFR_RNDN);
        mpfr_add(r9854223, r9854219, r9854222, MPFR_RNDN);
        ;
        mpfr_mul(r9854225, r9854221, r9854189, MPFR_RNDN);
        mpfr_mul(r9854226, r9854224, r9854225, MPFR_RNDN);
        mpfr_add(r9854227, r9854223, r9854226, MPFR_RNDN);
        ;
        mpfr_mul(r9854229, r9854225, r9854189, MPFR_RNDN);
        mpfr_mul(r9854230, r9854228, r9854229, MPFR_RNDN);
        mpfr_add(r9854231, r9854227, r9854230, MPFR_RNDN);
        ;
        mpfr_mul(r9854233, r9854229, r9854189, MPFR_RNDN);
        mpfr_mul(r9854234, r9854232, r9854233, MPFR_RNDN);
        mpfr_add(r9854235, r9854231, r9854234, MPFR_RNDN);
        return mpfr_get_d(r9854235, MPFR_RNDN);
}

static mpfr_t r9854236, r9854237, r9854238, r9854239, r9854240, r9854241, r9854242, r9854243, r9854244, r9854245, r9854246, r9854247, r9854248, r9854249, r9854250, r9854251, r9854252, r9854253, r9854254, r9854255, r9854256, r9854257, r9854258, r9854259, r9854260, r9854261, r9854262, r9854263, r9854264, r9854265, r9854266, r9854267, r9854268, r9854269, r9854270, r9854271, r9854272, r9854273, r9854274, r9854275, r9854276, r9854277, r9854278, r9854279, r9854280, r9854281, r9854282, r9854283, r9854284, r9854285, r9854286, r9854287, r9854288, r9854289, r9854290, r9854291, r9854292, r9854293, r9854294, r9854295, r9854296, r9854297;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9854236, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9854237, "-17.0", 10, MPFR_RNDN);
        mpfr_init(r9854238);
        mpfr_init(r9854239);
        mpfr_init(r9854240);
        mpfr_init_set_str(r9854241, "68.0", 10, MPFR_RNDN);
        mpfr_init(r9854242);
        mpfr_init(r9854243);
        mpfr_init(r9854244);
        mpfr_init_set_str(r9854245, "-113.333333", 10, MPFR_RNDN);
        mpfr_init(r9854246);
        mpfr_init(r9854247);
        mpfr_init(r9854248);
        mpfr_init_set_str(r9854249, "99.166667", 10, MPFR_RNDN);
        mpfr_init(r9854250);
        mpfr_init(r9854251);
        mpfr_init(r9854252);
        mpfr_init_set_str(r9854253, "-51.566667", 10, MPFR_RNDN);
        mpfr_init(r9854254);
        mpfr_init(r9854255);
        mpfr_init(r9854256);
        mpfr_init_set_str(r9854257, "17.188889", 10, MPFR_RNDN);
        mpfr_init(r9854258);
        mpfr_init(r9854259);
        mpfr_init(r9854260);
        mpfr_init_set_str(r9854261, "-3.85873", 10, MPFR_RNDN);
        mpfr_init(r9854262);
        mpfr_init(r9854263);
        mpfr_init(r9854264);
        mpfr_init_set_str(r9854265, "0.602927", 10, MPFR_RNDN);
        mpfr_init(r9854266);
        mpfr_init(r9854267);
        mpfr_init(r9854268);
        mpfr_init_set_str(r9854269, "-0.066992", 10, MPFR_RNDN);
        mpfr_init(r9854270);
        mpfr_init(r9854271);
        mpfr_init(r9854272);
        mpfr_init_set_str(r9854273, "0.005359", 10, MPFR_RNDN);
        mpfr_init(r9854274);
        mpfr_init(r9854275);
        mpfr_init(r9854276);
        mpfr_init_set_str(r9854277, "-0.00031", 10, MPFR_RNDN);
        mpfr_init(r9854278);
        mpfr_init(r9854279);
        mpfr_init(r9854280);
        mpfr_init_set_str(r9854281, "1.3e-05", 10, MPFR_RNDN);
        mpfr_init_set_str(r9854282, "3", 10, MPFR_RNDN);
        mpfr_init(r9854283);
        mpfr_init_set_str(r9854284, "1", 10, MPFR_RNDN);
        mpfr_init(r9854285);
        mpfr_init(r9854286);
        mpfr_init(r9854287);
        mpfr_init(r9854288);
        mpfr_init(r9854289);
        mpfr_init(r9854290);
        mpfr_init(r9854291);
        mpfr_init(r9854292);
        mpfr_init(r9854293);
        mpfr_init(r9854294);
        mpfr_init(r9854295);
        mpfr_init(r9854296);
        mpfr_init(r9854297);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9854238, x, MPFR_RNDN);
        mpfr_mul(r9854239, r9854237, r9854238, MPFR_RNDN);
        mpfr_add(r9854240, r9854236, r9854239, MPFR_RNDN);
        ;
        mpfr_mul(r9854242, r9854238, r9854238, MPFR_RNDN);
        mpfr_mul(r9854243, r9854241, r9854242, MPFR_RNDN);
        mpfr_add(r9854244, r9854240, r9854243, MPFR_RNDN);
        ;
        mpfr_mul(r9854246, r9854242, r9854238, MPFR_RNDN);
        mpfr_mul(r9854247, r9854245, r9854246, MPFR_RNDN);
        mpfr_add(r9854248, r9854244, r9854247, MPFR_RNDN);
        ;
        mpfr_mul(r9854250, r9854246, r9854238, MPFR_RNDN);
        mpfr_mul(r9854251, r9854249, r9854250, MPFR_RNDN);
        mpfr_add(r9854252, r9854248, r9854251, MPFR_RNDN);
        ;
        mpfr_mul(r9854254, r9854250, r9854238, MPFR_RNDN);
        mpfr_mul(r9854255, r9854253, r9854254, MPFR_RNDN);
        mpfr_add(r9854256, r9854252, r9854255, MPFR_RNDN);
        ;
        mpfr_mul(r9854258, r9854254, r9854238, MPFR_RNDN);
        mpfr_mul(r9854259, r9854257, r9854258, MPFR_RNDN);
        mpfr_add(r9854260, r9854256, r9854259, MPFR_RNDN);
        ;
        mpfr_mul(r9854262, r9854258, r9854238, MPFR_RNDN);
        mpfr_mul(r9854263, r9854261, r9854262, MPFR_RNDN);
        mpfr_add(r9854264, r9854260, r9854263, MPFR_RNDN);
        ;
        mpfr_mul(r9854266, r9854262, r9854238, MPFR_RNDN);
        mpfr_mul(r9854267, r9854265, r9854266, MPFR_RNDN);
        mpfr_add(r9854268, r9854264, r9854267, MPFR_RNDN);
        ;
        mpfr_mul(r9854270, r9854266, r9854238, MPFR_RNDN);
        mpfr_mul(r9854271, r9854269, r9854270, MPFR_RNDN);
        mpfr_add(r9854272, r9854268, r9854271, MPFR_RNDN);
        ;
        mpfr_mul(r9854274, r9854270, r9854238, MPFR_RNDN);
        mpfr_mul(r9854275, r9854273, r9854274, MPFR_RNDN);
        mpfr_add(r9854276, r9854272, r9854275, MPFR_RNDN);
        ;
        mpfr_mul(r9854278, r9854274, r9854238, MPFR_RNDN);
        mpfr_mul(r9854279, r9854277, r9854278, MPFR_RNDN);
        mpfr_add(r9854280, r9854276, r9854279, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9854283, r9854238, r9854282, MPFR_RNDN);
        ;
        mpfr_add(r9854285, r9854284, r9854282, MPFR_RNDN);
        mpfr_pow(r9854286, r9854283, r9854285, MPFR_RNDN);
        mpfr_cbrt(r9854287, r9854286, MPFR_RNDN);
        mpfr_mul(r9854288, r9854287, r9854238, MPFR_RNDN);
        mpfr_mul(r9854289, r9854288, r9854238, MPFR_RNDN);
        mpfr_mul(r9854290, r9854289, r9854238, MPFR_RNDN);
        mpfr_mul(r9854291, r9854290, r9854238, MPFR_RNDN);
        mpfr_mul(r9854292, r9854291, r9854238, MPFR_RNDN);
        mpfr_mul(r9854293, r9854292, r9854238, MPFR_RNDN);
        mpfr_mul(r9854294, r9854293, r9854238, MPFR_RNDN);
        mpfr_mul(r9854295, r9854294, r9854238, MPFR_RNDN);
        mpfr_mul(r9854296, r9854281, r9854295, MPFR_RNDN);
        mpfr_add(r9854297, r9854280, r9854296, MPFR_RNDN);
        return mpfr_get_d(r9854297, MPFR_RNDN);
}

static mpfr_t r9854298, r9854299, r9854300, r9854301, r9854302, r9854303, r9854304, r9854305, r9854306, r9854307, r9854308, r9854309, r9854310, r9854311, r9854312, r9854313, r9854314, r9854315, r9854316, r9854317, r9854318, r9854319, r9854320, r9854321, r9854322, r9854323, r9854324, r9854325, r9854326, r9854327, r9854328, r9854329, r9854330, r9854331, r9854332, r9854333, r9854334, r9854335, r9854336, r9854337, r9854338, r9854339, r9854340, r9854341, r9854342, r9854343, r9854344, r9854345, r9854346, r9854347, r9854348, r9854349, r9854350, r9854351, r9854352, r9854353, r9854354, r9854355, r9854356, r9854357, r9854358, r9854359;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9854298, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9854299, "-17.0", 10, MPFR_RNDN);
        mpfr_init(r9854300);
        mpfr_init(r9854301);
        mpfr_init(r9854302);
        mpfr_init_set_str(r9854303, "68.0", 10, MPFR_RNDN);
        mpfr_init(r9854304);
        mpfr_init(r9854305);
        mpfr_init(r9854306);
        mpfr_init_set_str(r9854307, "-113.333333", 10, MPFR_RNDN);
        mpfr_init(r9854308);
        mpfr_init(r9854309);
        mpfr_init(r9854310);
        mpfr_init_set_str(r9854311, "99.166667", 10, MPFR_RNDN);
        mpfr_init(r9854312);
        mpfr_init(r9854313);
        mpfr_init(r9854314);
        mpfr_init_set_str(r9854315, "-51.566667", 10, MPFR_RNDN);
        mpfr_init(r9854316);
        mpfr_init(r9854317);
        mpfr_init(r9854318);
        mpfr_init_set_str(r9854319, "17.188889", 10, MPFR_RNDN);
        mpfr_init(r9854320);
        mpfr_init(r9854321);
        mpfr_init(r9854322);
        mpfr_init_set_str(r9854323, "-3.85873", 10, MPFR_RNDN);
        mpfr_init(r9854324);
        mpfr_init(r9854325);
        mpfr_init(r9854326);
        mpfr_init_set_str(r9854327, "0.602927", 10, MPFR_RNDN);
        mpfr_init(r9854328);
        mpfr_init(r9854329);
        mpfr_init(r9854330);
        mpfr_init_set_str(r9854331, "-0.066992", 10, MPFR_RNDN);
        mpfr_init(r9854332);
        mpfr_init(r9854333);
        mpfr_init(r9854334);
        mpfr_init_set_str(r9854335, "0.005359", 10, MPFR_RNDN);
        mpfr_init(r9854336);
        mpfr_init(r9854337);
        mpfr_init(r9854338);
        mpfr_init_set_str(r9854339, "-0.00031", 10, MPFR_RNDN);
        mpfr_init(r9854340);
        mpfr_init(r9854341);
        mpfr_init(r9854342);
        mpfr_init_set_str(r9854343, "1.3e-05", 10, MPFR_RNDN);
        mpfr_init_set_str(r9854344, "3", 10, MPFR_RNDN);
        mpfr_init(r9854345);
        mpfr_init_set_str(r9854346, "1", 10, MPFR_RNDN);
        mpfr_init(r9854347);
        mpfr_init(r9854348);
        mpfr_init(r9854349);
        mpfr_init(r9854350);
        mpfr_init(r9854351);
        mpfr_init(r9854352);
        mpfr_init(r9854353);
        mpfr_init(r9854354);
        mpfr_init(r9854355);
        mpfr_init(r9854356);
        mpfr_init(r9854357);
        mpfr_init(r9854358);
        mpfr_init(r9854359);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9854300, x, MPFR_RNDN);
        mpfr_mul(r9854301, r9854299, r9854300, MPFR_RNDN);
        mpfr_add(r9854302, r9854298, r9854301, MPFR_RNDN);
        ;
        mpfr_mul(r9854304, r9854300, r9854300, MPFR_RNDN);
        mpfr_mul(r9854305, r9854303, r9854304, MPFR_RNDN);
        mpfr_add(r9854306, r9854302, r9854305, MPFR_RNDN);
        ;
        mpfr_mul(r9854308, r9854304, r9854300, MPFR_RNDN);
        mpfr_mul(r9854309, r9854307, r9854308, MPFR_RNDN);
        mpfr_add(r9854310, r9854306, r9854309, MPFR_RNDN);
        ;
        mpfr_mul(r9854312, r9854308, r9854300, MPFR_RNDN);
        mpfr_mul(r9854313, r9854311, r9854312, MPFR_RNDN);
        mpfr_add(r9854314, r9854310, r9854313, MPFR_RNDN);
        ;
        mpfr_mul(r9854316, r9854312, r9854300, MPFR_RNDN);
        mpfr_mul(r9854317, r9854315, r9854316, MPFR_RNDN);
        mpfr_add(r9854318, r9854314, r9854317, MPFR_RNDN);
        ;
        mpfr_mul(r9854320, r9854316, r9854300, MPFR_RNDN);
        mpfr_mul(r9854321, r9854319, r9854320, MPFR_RNDN);
        mpfr_add(r9854322, r9854318, r9854321, MPFR_RNDN);
        ;
        mpfr_mul(r9854324, r9854320, r9854300, MPFR_RNDN);
        mpfr_mul(r9854325, r9854323, r9854324, MPFR_RNDN);
        mpfr_add(r9854326, r9854322, r9854325, MPFR_RNDN);
        ;
        mpfr_mul(r9854328, r9854324, r9854300, MPFR_RNDN);
        mpfr_mul(r9854329, r9854327, r9854328, MPFR_RNDN);
        mpfr_add(r9854330, r9854326, r9854329, MPFR_RNDN);
        ;
        mpfr_mul(r9854332, r9854328, r9854300, MPFR_RNDN);
        mpfr_mul(r9854333, r9854331, r9854332, MPFR_RNDN);
        mpfr_add(r9854334, r9854330, r9854333, MPFR_RNDN);
        ;
        mpfr_mul(r9854336, r9854332, r9854300, MPFR_RNDN);
        mpfr_mul(r9854337, r9854335, r9854336, MPFR_RNDN);
        mpfr_add(r9854338, r9854334, r9854337, MPFR_RNDN);
        ;
        mpfr_mul(r9854340, r9854336, r9854300, MPFR_RNDN);
        mpfr_mul(r9854341, r9854339, r9854340, MPFR_RNDN);
        mpfr_add(r9854342, r9854338, r9854341, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9854345, r9854300, r9854344, MPFR_RNDN);
        ;
        mpfr_add(r9854347, r9854346, r9854344, MPFR_RNDN);
        mpfr_pow(r9854348, r9854345, r9854347, MPFR_RNDN);
        mpfr_cbrt(r9854349, r9854348, MPFR_RNDN);
        mpfr_mul(r9854350, r9854349, r9854300, MPFR_RNDN);
        mpfr_mul(r9854351, r9854350, r9854300, MPFR_RNDN);
        mpfr_mul(r9854352, r9854351, r9854300, MPFR_RNDN);
        mpfr_mul(r9854353, r9854352, r9854300, MPFR_RNDN);
        mpfr_mul(r9854354, r9854353, r9854300, MPFR_RNDN);
        mpfr_mul(r9854355, r9854354, r9854300, MPFR_RNDN);
        mpfr_mul(r9854356, r9854355, r9854300, MPFR_RNDN);
        mpfr_mul(r9854357, r9854356, r9854300, MPFR_RNDN);
        mpfr_mul(r9854358, r9854343, r9854357, MPFR_RNDN);
        mpfr_add(r9854359, r9854342, r9854358, MPFR_RNDN);
        return mpfr_get_d(r9854359, MPFR_RNDN);
}

