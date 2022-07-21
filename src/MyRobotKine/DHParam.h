
#ifndef DHPARAM_H
#define DHPARAM_H
#include <array>

typedef struct {
    double theta;  //关节变量
    double length;
    double d;
    double alpha;

    double minTheta; // 关节限位
    double maxTheta;
}param_t;

class  DHParam
{
public:
    DHParam();

    std::array<param_t,6> param_table;

    double offet_j2;
    double offet_j6;

};

#endif // DHPARAM_H
