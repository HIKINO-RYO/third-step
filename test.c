#include<stdio.h>
#include<math.h>

int main(){
	double science[20] = {65.0,80.0,67.0,35.0,58.0,60.0,72.0,75.0,68.0,92.0,36.0,2.0,58.5,46.0,42.0,78.0,62.0,84.0,70.0}
	double math[20] = {44.0,87.0,100.0,63.0,52.0,60.0,58.0,73.0,55.0,86.0,29.0,56.0,89.0,23.0,65.0,84.0,64.0,27.0,86.0,84.0}
	double average = 0.0;
	double average2 = 0.0;
	double total = 0.0;
	double total2 = 0.0;
	double dev = 0.0;
	double dev2 = 0.0;
	double var = 0.0;
	double var2 = 0.0;

	for(int i = 0;i<20;i++){
		total += science[i];
		total2 += math[i];
	}
	printf("理科合計：%lf\n数学合計：%lf\n",total,total2);

	average = total/20.0;
	average2 = total2/20.0;
	printf("理科平均：%lf\n数学平均：%lf\n",average,average2);

	for(i=0;i<20;i++){
		var += ((science[i] -average)*(science[i] - average));
		var2 += ((math[i] - average2)*(math[i] - average2));
	}
