#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "17";

double f_if(float x) {
        float r10585997 = 1.0;
        float r10585998 = -17.0;
        float r10585999 = x;
        float r10586000 = r10585998 * r10585999;
        float r10586001 = r10585997 + r10586000;
        float r10586002 = 68.0;
        float r10586003 = r10585999 * r10585999;
        float r10586004 = r10586002 * r10586003;
        float r10586005 = r10586001 + r10586004;
        float r10586006 = -113.333333;
        float r10586007 = r10586003 * r10585999;
        float r10586008 = r10586006 * r10586007;
        float r10586009 = r10586005 + r10586008;
        float r10586010 = 99.166667;
        float r10586011 = r10586007 * r10585999;
        float r10586012 = r10586010 * r10586011;
        float r10586013 = r10586009 + r10586012;
        float r10586014 = -51.566667;
        float r10586015 = r10586011 * r10585999;
        float r10586016 = r10586014 * r10586015;
        float r10586017 = r10586013 + r10586016;
        float r10586018 = 17.188889;
        float r10586019 = r10586015 * r10585999;
        float r10586020 = r10586018 * r10586019;
        float r10586021 = r10586017 + r10586020;
        float r10586022 = -3.85873;
        float r10586023 = r10586019 * r10585999;
        float r10586024 = r10586022 * r10586023;
        float r10586025 = r10586021 + r10586024;
        float r10586026 = 0.602927;
        float r10586027 = r10586023 * r10585999;
        float r10586028 = r10586026 * r10586027;
        float r10586029 = r10586025 + r10586028;
        float r10586030 = -0.066992;
        float r10586031 = r10586027 * r10585999;
        float r10586032 = r10586030 * r10586031;
        float r10586033 = r10586029 + r10586032;
        float r10586034 = 0.005359;
        float r10586035 = r10586031 * r10585999;
        float r10586036 = r10586034 * r10586035;
        float r10586037 = r10586033 + r10586036;
        float r10586038 = -0.00031;
        float r10586039 = r10586035 * r10585999;
        float r10586040 = r10586038 * r10586039;
        float r10586041 = r10586037 + r10586040;
        float r10586042 = 1.3e-05;
        float r10586043 = r10586039 * r10585999;
        float r10586044 = r10586042 * r10586043;
        float r10586045 = r10586041 + r10586044;
        return r10586045;
}

double f_id(double x) {
        double r10586046 = 1.0;
        double r10586047 = -17.0;
        double r10586048 = x;
        double r10586049 = r10586047 * r10586048;
        double r10586050 = r10586046 + r10586049;
        double r10586051 = 68.0;
        double r10586052 = r10586048 * r10586048;
        double r10586053 = r10586051 * r10586052;
        double r10586054 = r10586050 + r10586053;
        double r10586055 = -113.333333;
        double r10586056 = r10586052 * r10586048;
        double r10586057 = r10586055 * r10586056;
        double r10586058 = r10586054 + r10586057;
        double r10586059 = 99.166667;
        double r10586060 = r10586056 * r10586048;
        double r10586061 = r10586059 * r10586060;
        double r10586062 = r10586058 + r10586061;
        double r10586063 = -51.566667;
        double r10586064 = r10586060 * r10586048;
        double r10586065 = r10586063 * r10586064;
        double r10586066 = r10586062 + r10586065;
        double r10586067 = 17.188889;
        double r10586068 = r10586064 * r10586048;
        double r10586069 = r10586067 * r10586068;
        double r10586070 = r10586066 + r10586069;
        double r10586071 = -3.85873;
        double r10586072 = r10586068 * r10586048;
        double r10586073 = r10586071 * r10586072;
        double r10586074 = r10586070 + r10586073;
        double r10586075 = 0.602927;
        double r10586076 = r10586072 * r10586048;
        double r10586077 = r10586075 * r10586076;
        double r10586078 = r10586074 + r10586077;
        double r10586079 = -0.066992;
        double r10586080 = r10586076 * r10586048;
        double r10586081 = r10586079 * r10586080;
        double r10586082 = r10586078 + r10586081;
        double r10586083 = 0.005359;
        double r10586084 = r10586080 * r10586048;
        double r10586085 = r10586083 * r10586084;
        double r10586086 = r10586082 + r10586085;
        double r10586087 = -0.00031;
        double r10586088 = r10586084 * r10586048;
        double r10586089 = r10586087 * r10586088;
        double r10586090 = r10586086 + r10586089;
        double r10586091 = 1.3e-05;
        double r10586092 = r10586088 * r10586048;
        double r10586093 = r10586091 * r10586092;
        double r10586094 = r10586090 + r10586093;
        return r10586094;
}


double f_of(float x) {
        float r10586095 = 1.0;
        float r10586096 = -17.0;
        float r10586097 = x;
        float r10586098 = r10586096 * r10586097;
        float r10586099 = r10586095 + r10586098;
        float r10586100 = -113.333333;
        float r10586101 = r10586097 * r10586100;
        float r10586102 = 68.0;
        float r10586103 = r10586101 + r10586102;
        float r10586104 = r10586097 * r10586097;
        float r10586105 = r10586103 * r10586104;
        float r10586106 = r10586099 + r10586105;
        float r10586107 = -51.566667;
        float r10586108 = r10586097 * r10586107;
        float r10586109 = 99.166667;
        float r10586110 = r10586108 + r10586109;
        float r10586111 = r10586104 * r10586104;
        float r10586112 = r10586110 * r10586111;
        float r10586113 = 3;
        float r10586114 = pow(r10586097, r10586113);
        float r10586115 = r10586114 * r10586114;
        float r10586116 = 17.188889;
        float r10586117 = -3.85873;
        float r10586118 = r10586117 * r10586097;
        float r10586119 = r10586116 + r10586118;
        float r10586120 = r10586115 * r10586119;
        float r10586121 = r10586112 + r10586120;
        float r10586122 = 1.3e-05;
        float r10586123 = r10586122 * r10586097;
        float r10586124 = r10586123 * r10586104;
        float r10586125 = pow(r10586114, r10586113);
        float r10586126 = r10586124 * r10586125;
        float r10586127 = r10586121 + r10586126;
        float r10586128 = r10586106 + r10586127;
        float r10586129 = r10586115 * r10586097;
        float r10586130 = -0.00031;
        float r10586131 = r10586130 * r10586097;
        float r10586132 = 0.005359;
        float r10586133 = r10586131 + r10586132;
        float r10586134 = r10586114 * r10586133;
        float r10586135 = r10586129 * r10586134;
        float r10586136 = 4;
        float r10586137 = pow(r10586097, r10586136);
        float r10586138 = 0.602927;
        float r10586139 = -0.066992;
        float r10586140 = r10586139 * r10586097;
        float r10586141 = r10586138 + r10586140;
        float r10586142 = r10586137 * r10586141;
        float r10586143 = r10586111 * r10586142;
        float r10586144 = r10586135 + r10586143;
        float r10586145 = r10586128 + r10586144;
        return r10586145;
}

double f_od(double x) {
        double r10586146 = 1.0;
        double r10586147 = -17.0;
        double r10586148 = x;
        double r10586149 = r10586147 * r10586148;
        double r10586150 = r10586146 + r10586149;
        double r10586151 = -113.333333;
        double r10586152 = r10586148 * r10586151;
        double r10586153 = 68.0;
        double r10586154 = r10586152 + r10586153;
        double r10586155 = r10586148 * r10586148;
        double r10586156 = r10586154 * r10586155;
        double r10586157 = r10586150 + r10586156;
        double r10586158 = -51.566667;
        double r10586159 = r10586148 * r10586158;
        double r10586160 = 99.166667;
        double r10586161 = r10586159 + r10586160;
        double r10586162 = r10586155 * r10586155;
        double r10586163 = r10586161 * r10586162;
        double r10586164 = 3;
        double r10586165 = pow(r10586148, r10586164);
        double r10586166 = r10586165 * r10586165;
        double r10586167 = 17.188889;
        double r10586168 = -3.85873;
        double r10586169 = r10586168 * r10586148;
        double r10586170 = r10586167 + r10586169;
        double r10586171 = r10586166 * r10586170;
        double r10586172 = r10586163 + r10586171;
        double r10586173 = 1.3e-05;
        double r10586174 = r10586173 * r10586148;
        double r10586175 = r10586174 * r10586155;
        double r10586176 = pow(r10586165, r10586164);
        double r10586177 = r10586175 * r10586176;
        double r10586178 = r10586172 + r10586177;
        double r10586179 = r10586157 + r10586178;
        double r10586180 = r10586166 * r10586148;
        double r10586181 = -0.00031;
        double r10586182 = r10586181 * r10586148;
        double r10586183 = 0.005359;
        double r10586184 = r10586182 + r10586183;
        double r10586185 = r10586165 * r10586184;
        double r10586186 = r10586180 * r10586185;
        double r10586187 = 4;
        double r10586188 = pow(r10586148, r10586187);
        double r10586189 = 0.602927;
        double r10586190 = -0.066992;
        double r10586191 = r10586190 * r10586148;
        double r10586192 = r10586189 + r10586191;
        double r10586193 = r10586188 * r10586192;
        double r10586194 = r10586162 * r10586193;
        double r10586195 = r10586186 + r10586194;
        double r10586196 = r10586179 + r10586195;
        return r10586196;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10586197, r10586198, r10586199, r10586200, r10586201, r10586202, r10586203, r10586204, r10586205, r10586206, r10586207, r10586208, r10586209, r10586210, r10586211, r10586212, r10586213, r10586214, r10586215, r10586216, r10586217, r10586218, r10586219, r10586220, r10586221, r10586222, r10586223, r10586224, r10586225, r10586226, r10586227, r10586228, r10586229, r10586230, r10586231, r10586232, r10586233, r10586234, r10586235, r10586236, r10586237, r10586238, r10586239, r10586240, r10586241, r10586242, r10586243, r10586244, r10586245;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10586197, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10586198, "-17.0", 10, MPFR_RNDN);
        mpfr_init(r10586199);
        mpfr_init(r10586200);
        mpfr_init(r10586201);
        mpfr_init_set_str(r10586202, "68.0", 10, MPFR_RNDN);
        mpfr_init(r10586203);
        mpfr_init(r10586204);
        mpfr_init(r10586205);
        mpfr_init_set_str(r10586206, "-113.333333", 10, MPFR_RNDN);
        mpfr_init(r10586207);
        mpfr_init(r10586208);
        mpfr_init(r10586209);
        mpfr_init_set_str(r10586210, "99.166667", 10, MPFR_RNDN);
        mpfr_init(r10586211);
        mpfr_init(r10586212);
        mpfr_init(r10586213);
        mpfr_init_set_str(r10586214, "-51.566667", 10, MPFR_RNDN);
        mpfr_init(r10586215);
        mpfr_init(r10586216);
        mpfr_init(r10586217);
        mpfr_init_set_str(r10586218, "17.188889", 10, MPFR_RNDN);
        mpfr_init(r10586219);
        mpfr_init(r10586220);
        mpfr_init(r10586221);
        mpfr_init_set_str(r10586222, "-3.85873", 10, MPFR_RNDN);
        mpfr_init(r10586223);
        mpfr_init(r10586224);
        mpfr_init(r10586225);
        mpfr_init_set_str(r10586226, "0.602927", 10, MPFR_RNDN);
        mpfr_init(r10586227);
        mpfr_init(r10586228);
        mpfr_init(r10586229);
        mpfr_init_set_str(r10586230, "-0.066992", 10, MPFR_RNDN);
        mpfr_init(r10586231);
        mpfr_init(r10586232);
        mpfr_init(r10586233);
        mpfr_init_set_str(r10586234, "0.005359", 10, MPFR_RNDN);
        mpfr_init(r10586235);
        mpfr_init(r10586236);
        mpfr_init(r10586237);
        mpfr_init_set_str(r10586238, "-0.00031", 10, MPFR_RNDN);
        mpfr_init(r10586239);
        mpfr_init(r10586240);
        mpfr_init(r10586241);
        mpfr_init_set_str(r10586242, "1.3e-05", 10, MPFR_RNDN);
        mpfr_init(r10586243);
        mpfr_init(r10586244);
        mpfr_init(r10586245);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10586199, x, MPFR_RNDN);
        mpfr_mul(r10586200, r10586198, r10586199, MPFR_RNDN);
        mpfr_add(r10586201, r10586197, r10586200, MPFR_RNDN);
        ;
        mpfr_mul(r10586203, r10586199, r10586199, MPFR_RNDN);
        mpfr_mul(r10586204, r10586202, r10586203, MPFR_RNDN);
        mpfr_add(r10586205, r10586201, r10586204, MPFR_RNDN);
        ;
        mpfr_mul(r10586207, r10586203, r10586199, MPFR_RNDN);
        mpfr_mul(r10586208, r10586206, r10586207, MPFR_RNDN);
        mpfr_add(r10586209, r10586205, r10586208, MPFR_RNDN);
        ;
        mpfr_mul(r10586211, r10586207, r10586199, MPFR_RNDN);
        mpfr_mul(r10586212, r10586210, r10586211, MPFR_RNDN);
        mpfr_add(r10586213, r10586209, r10586212, MPFR_RNDN);
        ;
        mpfr_mul(r10586215, r10586211, r10586199, MPFR_RNDN);
        mpfr_mul(r10586216, r10586214, r10586215, MPFR_RNDN);
        mpfr_add(r10586217, r10586213, r10586216, MPFR_RNDN);
        ;
        mpfr_mul(r10586219, r10586215, r10586199, MPFR_RNDN);
        mpfr_mul(r10586220, r10586218, r10586219, MPFR_RNDN);
        mpfr_add(r10586221, r10586217, r10586220, MPFR_RNDN);
        ;
        mpfr_mul(r10586223, r10586219, r10586199, MPFR_RNDN);
        mpfr_mul(r10586224, r10586222, r10586223, MPFR_RNDN);
        mpfr_add(r10586225, r10586221, r10586224, MPFR_RNDN);
        ;
        mpfr_mul(r10586227, r10586223, r10586199, MPFR_RNDN);
        mpfr_mul(r10586228, r10586226, r10586227, MPFR_RNDN);
        mpfr_add(r10586229, r10586225, r10586228, MPFR_RNDN);
        ;
        mpfr_mul(r10586231, r10586227, r10586199, MPFR_RNDN);
        mpfr_mul(r10586232, r10586230, r10586231, MPFR_RNDN);
        mpfr_add(r10586233, r10586229, r10586232, MPFR_RNDN);
        ;
        mpfr_mul(r10586235, r10586231, r10586199, MPFR_RNDN);
        mpfr_mul(r10586236, r10586234, r10586235, MPFR_RNDN);
        mpfr_add(r10586237, r10586233, r10586236, MPFR_RNDN);
        ;
        mpfr_mul(r10586239, r10586235, r10586199, MPFR_RNDN);
        mpfr_mul(r10586240, r10586238, r10586239, MPFR_RNDN);
        mpfr_add(r10586241, r10586237, r10586240, MPFR_RNDN);
        ;
        mpfr_mul(r10586243, r10586239, r10586199, MPFR_RNDN);
        mpfr_mul(r10586244, r10586242, r10586243, MPFR_RNDN);
        mpfr_add(r10586245, r10586241, r10586244, MPFR_RNDN);
        return mpfr_get_d(r10586245, MPFR_RNDN);
}

static mpfr_t r10586246, r10586247, r10586248, r10586249, r10586250, r10586251, r10586252, r10586253, r10586254, r10586255, r10586256, r10586257, r10586258, r10586259, r10586260, r10586261, r10586262, r10586263, r10586264, r10586265, r10586266, r10586267, r10586268, r10586269, r10586270, r10586271, r10586272, r10586273, r10586274, r10586275, r10586276, r10586277, r10586278, r10586279, r10586280, r10586281, r10586282, r10586283, r10586284, r10586285, r10586286, r10586287, r10586288, r10586289, r10586290, r10586291, r10586292, r10586293, r10586294, r10586295, r10586296;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10586246, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10586247, "-17.0", 10, MPFR_RNDN);
        mpfr_init(r10586248);
        mpfr_init(r10586249);
        mpfr_init(r10586250);
        mpfr_init_set_str(r10586251, "-113.333333", 10, MPFR_RNDN);
        mpfr_init(r10586252);
        mpfr_init_set_str(r10586253, "68.0", 10, MPFR_RNDN);
        mpfr_init(r10586254);
        mpfr_init(r10586255);
        mpfr_init(r10586256);
        mpfr_init(r10586257);
        mpfr_init_set_str(r10586258, "-51.566667", 10, MPFR_RNDN);
        mpfr_init(r10586259);
        mpfr_init_set_str(r10586260, "99.166667", 10, MPFR_RNDN);
        mpfr_init(r10586261);
        mpfr_init(r10586262);
        mpfr_init(r10586263);
        mpfr_init_set_str(r10586264, "3", 10, MPFR_RNDN);
        mpfr_init(r10586265);
        mpfr_init(r10586266);
        mpfr_init_set_str(r10586267, "17.188889", 10, MPFR_RNDN);
        mpfr_init_set_str(r10586268, "-3.85873", 10, MPFR_RNDN);
        mpfr_init(r10586269);
        mpfr_init(r10586270);
        mpfr_init(r10586271);
        mpfr_init(r10586272);
        mpfr_init_set_str(r10586273, "1.3e-05", 10, MPFR_RNDN);
        mpfr_init(r10586274);
        mpfr_init(r10586275);
        mpfr_init(r10586276);
        mpfr_init(r10586277);
        mpfr_init(r10586278);
        mpfr_init(r10586279);
        mpfr_init(r10586280);
        mpfr_init_set_str(r10586281, "-0.00031", 10, MPFR_RNDN);
        mpfr_init(r10586282);
        mpfr_init_set_str(r10586283, "0.005359", 10, MPFR_RNDN);
        mpfr_init(r10586284);
        mpfr_init(r10586285);
        mpfr_init(r10586286);
        mpfr_init_set_str(r10586287, "4", 10, MPFR_RNDN);
        mpfr_init(r10586288);
        mpfr_init_set_str(r10586289, "0.602927", 10, MPFR_RNDN);
        mpfr_init_set_str(r10586290, "-0.066992", 10, MPFR_RNDN);
        mpfr_init(r10586291);
        mpfr_init(r10586292);
        mpfr_init(r10586293);
        mpfr_init(r10586294);
        mpfr_init(r10586295);
        mpfr_init(r10586296);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10586248, x, MPFR_RNDN);
        mpfr_mul(r10586249, r10586247, r10586248, MPFR_RNDN);
        mpfr_add(r10586250, r10586246, r10586249, MPFR_RNDN);
        ;
        mpfr_mul(r10586252, r10586248, r10586251, MPFR_RNDN);
        ;
        mpfr_add(r10586254, r10586252, r10586253, MPFR_RNDN);
        mpfr_mul(r10586255, r10586248, r10586248, MPFR_RNDN);
        mpfr_mul(r10586256, r10586254, r10586255, MPFR_RNDN);
        mpfr_add(r10586257, r10586250, r10586256, MPFR_RNDN);
        ;
        mpfr_mul(r10586259, r10586248, r10586258, MPFR_RNDN);
        ;
        mpfr_add(r10586261, r10586259, r10586260, MPFR_RNDN);
        mpfr_mul(r10586262, r10586255, r10586255, MPFR_RNDN);
        mpfr_mul(r10586263, r10586261, r10586262, MPFR_RNDN);
        ;
        mpfr_pow(r10586265, r10586248, r10586264, MPFR_RNDN);
        mpfr_mul(r10586266, r10586265, r10586265, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10586269, r10586268, r10586248, MPFR_RNDN);
        mpfr_add(r10586270, r10586267, r10586269, MPFR_RNDN);
        mpfr_mul(r10586271, r10586266, r10586270, MPFR_RNDN);
        mpfr_add(r10586272, r10586263, r10586271, MPFR_RNDN);
        ;
        mpfr_mul(r10586274, r10586273, r10586248, MPFR_RNDN);
        mpfr_mul(r10586275, r10586274, r10586255, MPFR_RNDN);
        mpfr_pow(r10586276, r10586265, r10586264, MPFR_RNDN);
        mpfr_mul(r10586277, r10586275, r10586276, MPFR_RNDN);
        mpfr_add(r10586278, r10586272, r10586277, MPFR_RNDN);
        mpfr_add(r10586279, r10586257, r10586278, MPFR_RNDN);
        mpfr_mul(r10586280, r10586266, r10586248, MPFR_RNDN);
        ;
        mpfr_mul(r10586282, r10586281, r10586248, MPFR_RNDN);
        ;
        mpfr_add(r10586284, r10586282, r10586283, MPFR_RNDN);
        mpfr_mul(r10586285, r10586265, r10586284, MPFR_RNDN);
        mpfr_mul(r10586286, r10586280, r10586285, MPFR_RNDN);
        ;
        mpfr_pow(r10586288, r10586248, r10586287, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10586291, r10586290, r10586248, MPFR_RNDN);
        mpfr_add(r10586292, r10586289, r10586291, MPFR_RNDN);
        mpfr_mul(r10586293, r10586288, r10586292, MPFR_RNDN);
        mpfr_mul(r10586294, r10586262, r10586293, MPFR_RNDN);
        mpfr_add(r10586295, r10586286, r10586294, MPFR_RNDN);
        mpfr_add(r10586296, r10586279, r10586295, MPFR_RNDN);
        return mpfr_get_d(r10586296, MPFR_RNDN);
}

static mpfr_t r10586297, r10586298, r10586299, r10586300, r10586301, r10586302, r10586303, r10586304, r10586305, r10586306, r10586307, r10586308, r10586309, r10586310, r10586311, r10586312, r10586313, r10586314, r10586315, r10586316, r10586317, r10586318, r10586319, r10586320, r10586321, r10586322, r10586323, r10586324, r10586325, r10586326, r10586327, r10586328, r10586329, r10586330, r10586331, r10586332, r10586333, r10586334, r10586335, r10586336, r10586337, r10586338, r10586339, r10586340, r10586341, r10586342, r10586343, r10586344, r10586345, r10586346, r10586347;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10586297, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10586298, "-17.0", 10, MPFR_RNDN);
        mpfr_init(r10586299);
        mpfr_init(r10586300);
        mpfr_init(r10586301);
        mpfr_init_set_str(r10586302, "-113.333333", 10, MPFR_RNDN);
        mpfr_init(r10586303);
        mpfr_init_set_str(r10586304, "68.0", 10, MPFR_RNDN);
        mpfr_init(r10586305);
        mpfr_init(r10586306);
        mpfr_init(r10586307);
        mpfr_init(r10586308);
        mpfr_init_set_str(r10586309, "-51.566667", 10, MPFR_RNDN);
        mpfr_init(r10586310);
        mpfr_init_set_str(r10586311, "99.166667", 10, MPFR_RNDN);
        mpfr_init(r10586312);
        mpfr_init(r10586313);
        mpfr_init(r10586314);
        mpfr_init_set_str(r10586315, "3", 10, MPFR_RNDN);
        mpfr_init(r10586316);
        mpfr_init(r10586317);
        mpfr_init_set_str(r10586318, "17.188889", 10, MPFR_RNDN);
        mpfr_init_set_str(r10586319, "-3.85873", 10, MPFR_RNDN);
        mpfr_init(r10586320);
        mpfr_init(r10586321);
        mpfr_init(r10586322);
        mpfr_init(r10586323);
        mpfr_init_set_str(r10586324, "1.3e-05", 10, MPFR_RNDN);
        mpfr_init(r10586325);
        mpfr_init(r10586326);
        mpfr_init(r10586327);
        mpfr_init(r10586328);
        mpfr_init(r10586329);
        mpfr_init(r10586330);
        mpfr_init(r10586331);
        mpfr_init_set_str(r10586332, "-0.00031", 10, MPFR_RNDN);
        mpfr_init(r10586333);
        mpfr_init_set_str(r10586334, "0.005359", 10, MPFR_RNDN);
        mpfr_init(r10586335);
        mpfr_init(r10586336);
        mpfr_init(r10586337);
        mpfr_init_set_str(r10586338, "4", 10, MPFR_RNDN);
        mpfr_init(r10586339);
        mpfr_init_set_str(r10586340, "0.602927", 10, MPFR_RNDN);
        mpfr_init_set_str(r10586341, "-0.066992", 10, MPFR_RNDN);
        mpfr_init(r10586342);
        mpfr_init(r10586343);
        mpfr_init(r10586344);
        mpfr_init(r10586345);
        mpfr_init(r10586346);
        mpfr_init(r10586347);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10586299, x, MPFR_RNDN);
        mpfr_mul(r10586300, r10586298, r10586299, MPFR_RNDN);
        mpfr_add(r10586301, r10586297, r10586300, MPFR_RNDN);
        ;
        mpfr_mul(r10586303, r10586299, r10586302, MPFR_RNDN);
        ;
        mpfr_add(r10586305, r10586303, r10586304, MPFR_RNDN);
        mpfr_mul(r10586306, r10586299, r10586299, MPFR_RNDN);
        mpfr_mul(r10586307, r10586305, r10586306, MPFR_RNDN);
        mpfr_add(r10586308, r10586301, r10586307, MPFR_RNDN);
        ;
        mpfr_mul(r10586310, r10586299, r10586309, MPFR_RNDN);
        ;
        mpfr_add(r10586312, r10586310, r10586311, MPFR_RNDN);
        mpfr_mul(r10586313, r10586306, r10586306, MPFR_RNDN);
        mpfr_mul(r10586314, r10586312, r10586313, MPFR_RNDN);
        ;
        mpfr_pow(r10586316, r10586299, r10586315, MPFR_RNDN);
        mpfr_mul(r10586317, r10586316, r10586316, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10586320, r10586319, r10586299, MPFR_RNDN);
        mpfr_add(r10586321, r10586318, r10586320, MPFR_RNDN);
        mpfr_mul(r10586322, r10586317, r10586321, MPFR_RNDN);
        mpfr_add(r10586323, r10586314, r10586322, MPFR_RNDN);
        ;
        mpfr_mul(r10586325, r10586324, r10586299, MPFR_RNDN);
        mpfr_mul(r10586326, r10586325, r10586306, MPFR_RNDN);
        mpfr_pow(r10586327, r10586316, r10586315, MPFR_RNDN);
        mpfr_mul(r10586328, r10586326, r10586327, MPFR_RNDN);
        mpfr_add(r10586329, r10586323, r10586328, MPFR_RNDN);
        mpfr_add(r10586330, r10586308, r10586329, MPFR_RNDN);
        mpfr_mul(r10586331, r10586317, r10586299, MPFR_RNDN);
        ;
        mpfr_mul(r10586333, r10586332, r10586299, MPFR_RNDN);
        ;
        mpfr_add(r10586335, r10586333, r10586334, MPFR_RNDN);
        mpfr_mul(r10586336, r10586316, r10586335, MPFR_RNDN);
        mpfr_mul(r10586337, r10586331, r10586336, MPFR_RNDN);
        ;
        mpfr_pow(r10586339, r10586299, r10586338, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10586342, r10586341, r10586299, MPFR_RNDN);
        mpfr_add(r10586343, r10586340, r10586342, MPFR_RNDN);
        mpfr_mul(r10586344, r10586339, r10586343, MPFR_RNDN);
        mpfr_mul(r10586345, r10586313, r10586344, MPFR_RNDN);
        mpfr_add(r10586346, r10586337, r10586345, MPFR_RNDN);
        mpfr_add(r10586347, r10586330, r10586346, MPFR_RNDN);
        return mpfr_get_d(r10586347, MPFR_RNDN);
}

