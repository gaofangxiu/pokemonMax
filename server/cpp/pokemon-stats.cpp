#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double b[151][6] = { { 45, 49, 49, 65, 65, 45 }, { 60, 62, 63, 80, 80, 60 }, { 80, 82, 83, 100, 100, 80 }, { 39, 52, 43, 60, 50, 65 }, { 58, 64, 58, 80, 65, 80 }, { 78, 84, 78, 109, 85, 100 }, { 44, 48, 65, 50, 64, 43 }, { 59, 63, 80, 65, 80, 58 }, { 79, 83, 100, 85, 105, 78 }, { 45, 30, 35, 20, 20, 45 }, { 50, 20, 55, 25, 25, 30 }, { 60, 45, 50, 90, 80, 70 }, { 40, 35, 30, 20, 20, 50 }, { 45, 25, 50, 25, 25, 35 }, { 65, 90, 40, 45, 80, 75 }, { 40, 45, 40, 35, 35, 56 }, { 63, 60, 55, 50, 50, 71 }, { 83, 80, 75, 70, 70, 101 }, { 30, 56, 35, 25, 35, 72 }, { 55, 81, 60, 50, 70, 97 }, { 40, 60, 30, 31, 31, 70 }, { 65, 90, 65, 61, 61, 100 }, { 35, 60, 44, 40, 54, 55 }, { 60, 85, 69, 65, 79, 80 }, { 35, 55, 40, 50, 50, 90 }, { 60, 90, 55, 90, 80, 110 }, { 50, 75, 85, 20, 30, 40 }, { 75, 100, 110, 45, 55, 65 }, { 55, 47, 52, 40, 40, 41 }, { 70, 62, 67, 55, 55, 56 }, { 90, 92, 87, 75, 85, 76 }, { 46, 57, 40, 40, 40, 50 }, { 61, 72, 57, 55, 55, 65 }, { 81, 102, 77, 85, 75, 85 }, { 70, 45, 48, 60, 65, 35 }, { 95, 70, 73, 95, 90, 60 }, { 38, 41, 40, 50, 65, 65 }, { 73, 76, 75, 81, 100, 100 }, { 115, 45, 20, 45, 25, 20 }, { 140, 70, 45, 85, 50, 45 }, { 40, 45, 35, 30, 40, 55 }, { 75, 80, 70, 65, 75, 90 }, { 45, 50, 55, 75, 65, 30 }, { 60, 65, 70, 85, 75, 40 }, { 75, 80, 85, 110, 90, 50 }, { 35, 70, 55, 45, 55, 25 }, { 60, 95, 80, 60, 80, 30 }, { 60, 55, 50, 40, 55, 45 }, { 70, 65, 60, 90, 75, 90 }, { 10, 55, 25, 35, 45, 95 }, { 35, 80, 50, 50, 70, 120 }, { 40, 45, 35, 40, 40, 90 }, { 65, 70, 60, 65, 65, 115 }, { 50, 52, 48, 65, 50, 55 }, { 80, 82, 78, 95, 80, 85 }, { 40, 80, 35, 35, 45, 70 }, { 65, 105, 60, 60, 70, 95 }, { 55, 70, 45, 70, 50, 60 }, { 90, 110, 80, 100, 80, 95 }, { 40, 50, 40, 40, 40, 90 }, { 65, 65, 65, 50, 50, 90 }, { 90, 95, 95, 70, 90, 70 }, { 25, 20, 15, 105, 55, 90 }, { 40, 35, 30, 120, 70, 105 }, { 55, 50, 45, 135, 95, 120 }, { 70, 80, 50, 35, 35, 35 }, { 80, 100, 70, 50, 60, 45 }, { 90, 130, 80, 65, 85, 55 }, { 50, 75, 35, 70, 30, 40 }, { 65, 90, 50, 85, 45, 55 }, { 80, 105, 65, 100, 70, 70 }, { 40, 40, 35, 50, 100, 70 }, { 80, 70, 65, 80, 120, 100 }, { 40, 80, 100, 30, 30, 20 }, { 55, 95, 115, 45, 45, 35 }, { 80, 120, 130, 55, 65, 45 }, { 50, 85, 55, 65, 65, 90 }, { 65, 100, 70, 80, 80, 105 }, { 90, 65, 65, 40, 40, 15 }, { 95, 75, 110, 100, 80, 30 }, { 25, 35, 70, 95, 55, 45 }, { 50, 60, 95, 120, 70, 70 }, { 52, 65, 55, 58, 62, 60 }, { 35, 85, 45, 35, 35, 75 }, { 60, 110, 70, 60, 60, 100 }, { 65, 45, 55, 45, 70, 45 }, { 90, 70, 80, 70, 95, 70 }, { 80, 80, 50, 40, 50, 25 }, { 105, 105, 75, 65, 100, 50 }, { 30, 65, 100, 45, 25, 40 }, { 50, 95, 180, 85, 45, 70 }, { 30, 35, 30, 100, 35, 80 }, { 45, 50, 45, 115, 55, 95 }, { 60, 65, 60, 130, 75, 110 }, { 35, 45, 160, 30, 45, 70 }, { 60, 48, 45, 43, 90, 42 }, { 85, 73, 70, 73, 115, 67 }, { 30, 105, 90, 25, 25, 50 }, { 55, 130, 115, 50, 50, 75 }, { 40, 30, 50, 55, 55, 100 }, { 60, 50, 70, 80, 80, 140 }, { 60, 40, 80, 60, 45, 40 }, { 95, 95, 85, 125, 65, 55 }, { 50, 50, 95, 40, 50, 35 }, { 60, 80, 110, 50, 80, 45 }, { 50, 120, 53, 35, 110, 87 }, { 50, 105, 79, 35, 110, 76 }, { 90, 55, 75, 60, 75, 30 }, { 40, 65, 95, 60, 45, 35 }, { 65, 90, 120, 85, 70, 60 }, { 80, 85, 95, 30, 30, 25 }, { 105, 130, 120, 45, 45, 40 }, { 250, 5, 5, 35, 105, 50 }, { 65, 55, 115, 100, 40, 60 }, { 105, 95, 80, 40, 80, 90 }, { 30, 40, 70, 70, 25, 60 }, { 55, 65, 95, 95, 45, 85 }, { 45, 67, 60, 35, 50, 63 }, { 80, 92, 65, 65, 80, 68 }, { 30, 45, 55, 70, 55, 85 }, { 60, 75, 85, 100, 85, 115 }, { 40, 45, 65, 100, 120, 90 }, { 70, 110, 80, 55, 80, 105 }, { 65, 50, 35, 115, 95, 95 }, { 65, 83, 57, 95, 85, 105 }, { 65, 95, 57, 100, 85, 93 }, { 65, 125, 100, 55, 70, 85 }, { 75, 100, 95, 40, 70, 110 }, { 20, 10, 55, 15, 20, 80 }, { 95, 125, 79, 60, 100, 81 }, { 130, 85, 80, 85, 95, 60 }, { 48, 48, 48, 48, 48, 48 }, { 55, 55, 50, 45, 65, 55 }, { 130, 65, 60, 110, 95, 65 }, { 65, 65, 60, 110, 95, 130 }, { 65, 130, 60, 95, 110, 65 }, { 65, 60, 70, 85, 75, 40 }, { 35, 40, 100, 90, 55, 35 }, { 70, 60, 125, 115, 70, 55 }, { 30, 80, 90, 55, 45, 55 }, { 60, 115, 105, 65, 70, 80 }, { 80, 105, 65, 60, 75, 130 }, { 160, 110, 65, 65, 110, 30 }, { 90, 85, 100, 95, 125, 85 }, { 90, 90, 85, 125, 90, 100 }, { 90, 100, 90, 125, 85, 90 }, { 41, 64, 45, 50, 50, 50 }, { 61, 84, 65, 70, 70, 70 }, { 91, 134, 95, 100, 100, 80 }, { 106, 110, 90, 154, 90, 130 }, { 100, 100, 100, 100, 100, 100 } };
double a[151][3];
double ecp[80] = { 0, 0.094000000000, 0.135137432000, 0.166397870000, 0.192650919000, 0.215732470000, 0.236572661000, 0.255720050000, 0.273530381000, 0.290249880000, 0.306057377000, 0.321087600000, 0.335445036000, 0.349212680000, 0.362457751000, 0.375235590000, 0.387592406000, 0.399567280000, 0.411193551000, 0.422500010000, 0.432926419000, 0.443107550000, 0.453059958000, 0.462798390000, 0.472336083000, 0.481684950000, 0.490855800000, 0.499858440000, 0.508701765000, 0.517393950000, 0.525942511000, 0.534354330000, 0.542635767000, 0.550792690000, 0.558830576000, 0.566754520000, 0.574569153000, 0.582278910000, 0.589887917000, 0.597400010000, 0.604818814000, 0.612157290000, 0.619399365000, 0.626567130000, 0.633644533000, 0.640652950000, 0.647576426000, 0.654435630000, 0.661214806000, 0.667934000000, 0.674577537000, 0.681164920000, 0.687680648000, 0.694143650000, 0.700538673000, 0.706884210000, 0.713164996000, 0.719399090000, 0.725571552000, 0.731700000000, 0.734741009000, 0.737769480000, 0.740785574000, 0.743789430000, 0.746781211000, 0.749761040000, 0.752729087000, 0.755685510000, 0.758630378000, 0.761563840000, 0.764486065000, 0.767397170000, 0.770297266000, 0.773186500000, 0.776064962000, 0.778932750000, 0.781790055000, 0.784636970000, 0.787473578000, 0.790300010000 };
int main()
{
	int i;
	for (i = 0; i <= 150; i++)
	{
		a[i][0] = b[i][0] * 2;
		a[i][1] = 2 * round(pow(b[i][1], 0.5)*pow(b[i][3], 0.5) + pow(b[i][5], 0.5));
		a[i][2] = 2 * round(pow(b[i][2], 0.5)*pow(b[i][4], 0.5) + pow(b[i][5], 0.5));
	}
	while (1)
	{
		int number,level;
		double cp, hp;
		double s2, a2, d2;
		double i1;
		double min = 10000;
		double ii2, ii3;
        printf("请输入：精灵序号 精灵等级 耐力、攻击、防御个体值 并回车，数据之间用空格隔开\n");
        scanf("%d%d%lf%lf%lf", &number, &level, &i1, &ii2, &ii3);
		s2 = (a[number - 1][0] + i1)*ecp[level];
		a2 = (a[number - 1][1] + ii2)*ecp[level];
		d2 = (a[number - 1][2] + ii3)*ecp[level];
		hp = floor(s2);
		cp =floor(sqrt(s2)*sqrt(d2)*a2 / 10);
        printf("\nCP值：%.0lf  HP值：%.0lf\n\n个体评估值：%d  完美度：%.2lf%%\n", cp, hp, int(i1 + ii2 * 2 + ii3), 100 * (i1 + ii2 * 2 + ii3)/60);
		double mincp, maxcp, minhp, maxhp;
		s2 = (a[number - 1][0])*ecp[level];
		a2 = (a[number - 1][1])*ecp[level];
		d2 = (a[number - 1][2])*ecp[level];
		mincp = floor(sqrt(s2)*sqrt(d2)*a2 / 10);
		s2 = (a[number - 1][0] + 15)*ecp[level];
		a2 = (a[number - 1][1] + 15)*ecp[level];
		d2 = (a[number - 1][2] + 15)*ecp[level];
		maxcp = floor(sqrt(s2)*sqrt(d2)*a2 / 10);
		minhp = floor((a[number - 1][0])*ecp[level]);
		maxhp = floor((a[number - 1][0] + 15)*ecp[level]);
        printf("\n#%d精灵%d级: 可能CP范围: %.0lf〜%.0lf 可能HP范围: %.0lf〜%.0lf\n\n",number, level, mincp, maxcp, minhp, maxhp);
        double sq1 = (a[number - 1][1] + ii2) * pow((a[number - 1][2] + ii3), 0.5) * pow((a[number - 1][0] + i1), 0.5)* 0.009426125469 / 10;
		double sq2 = (a[number - 1][1] + ii2) * pow((a[number - 1][2] + ii3), 0.5) * pow((a[number - 1][0] + i1), 0.5)* 0.008919025675 / 10;
		double sq3 = (a[number - 1][1] + ii2) * pow((a[number - 1][2] + ii3), 0.5) * pow((a[number - 1][0] + i1), 0.5)* 0.008924905903 / 10;
		double sq4 = (a[number - 1][1] + ii2) * pow((a[number - 1][2] + ii3), 0.5) * pow((a[number - 1][0] + i1), 0.5)* 0.00445946079 / 10;
        printf("精灵成长如下:\n1〜18级升级提升CP值： %.2lf\n19〜38级升级提升CP值：%.2lf\n39〜58级升级提升CP值：%.2lf\n59〜78级升级提升CP值：%.2lf\n\n", sq1, sq2, sq3, sq4);
		double fullhp = floor((a[number - 1][0] + 15)*ecp[79]);
		double fullcp = floor((a[number - 1][1] + 15) * pow((a[number - 1][2] + 15), 0.5) * pow((a[number - 1][0] + 15), 0.5)* ecp[79]*ecp[79] / 10);
        printf("#%d精灵满成长值79级(满级)属性：  CP值：%.0lf  HP值：%.0lf\n\n",  number,fullcp, fullhp);
		double rcp = fullcp = floor((a[number - 1][1] + ii2) * pow((a[number - 1][2] + ii3), 0.5) * pow((a[number - 1][0] + i1), 0.5)* ecp[79] * ecp[79] / 10);
		double rhp = floor((a[number - 1][0] + i1)*ecp[79]);
        printf("#%d精灵当前成长值79级(满级)属性：CP值：%.0lf  HP值：%.0lf\n",number, rcp, rhp);
        printf("--------------------------------------------------------------------------------");
	}

}