#define c 299792458 // 单位：m/s
void Einstein(){
// 定义光速
// 计算洛伦兹因子
double lorentzFactor(double v) {
    return 1 / sqrt(1 - pow(v / c, 2));
}
// 计算时间膨胀
double timeDilation(double v) {
    double beta = v / c;
    return lorentzFactor(v) / sqrt(1 - beta * beta);
}
// 计算长度收缩
double lengthContraction(double v) {
    double beta = v / c;
    return lorentzFactor(v) * sqrt(1 - beta * beta);
}
// 计算相对论质量
double relativisticMass(double v) {
    return lorentzFactor(v) * m0;
}
int main() {
    printf("洛伦兹因子: %.6f\n", lorentzFactor(v));
    printf("时间膨胀: %.6f\n", timeDilation(v));
    printf("长度收缩: %.6f\n", lengthContraction(v));
    printf("相对论质量: %.6f\n", relativisticMass(v));
    return 0;
}
;}
void Hawking(){

;}
void Robot(){

;}
void Heptapod(){
     char BigInt = 
     "";
     char Float =
     "";
;}
