#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>

int main()
{
	int a[1000],sum=0,a1[10];
	int sum1,sum2,sum3,sum4,sum5,sum6,sum7,sum8,sum9;
	int process1=0,process2=0,process3=0,process4=0,process5=0,process6=0,v7=0,process8=0,process9=0,process10=0;
	for(int i=0;i<1000;i++){
		a[i]=i;
	}
	int cpid1=fork();
	if(cpid1==0){
		for(int i1=0;i1<100;i1++){
			process1+=a[i1];
		}
		sum+=process1;
		exit(sum);
	}
	else{
		sum1=-1;
		wait(&sum1);
		int cpid2=fork();
		if(cpid2==0){
			for(int i2=100;i2<200;i2++){
				process2+=a[i2];
			}
			sum+=process2;
			exit(sum);
		}
		else{
			sum2=-1;
			wait(&sum2);
			int cpid3=fork();
			if(cpid3==0){
				for(int i3=200;i3<300;i3++){
					process3+=a[i3];
				}
				sum+=process3;
				exit(sum);
			}
			else{
				sum3=-1;
				wait(&sum3);
				int cpid4=fork();
				if(cpid4==0){
					for(int i4=300;i4<400;i4++){
						process4+=a[i4];
					}
					sum+=process4;
					exit(sum);
				}
				else{
					sum4=-1;
					wait(&sum4);
					int cpid5=fork();
					if(cpid5==0){
						for(int i5=400;i5<500;i5++){
							process5+=a[i5];
						}
						sum+=process5;
						exit(sum);
					}
					else{
						sum5=-1;
						wait(&sum5);
						int cpid6=fork();
						if(cpid6==0){
							for(int i6=500;i6<600;i6++){
								process6+=a[i6];
							}
							sum+=process6;
							exit(sum);
						}
						else{
							sum6=-1;
							wait(&sum6);
							int cpid7=fork();
							if(cpid7==0){
								for(int i7=600;i7<700;i7++){
									v7+=a[i7];
								}
								sum+=v7;
								exit(sum);
							}
							else{
								sum7=-1;
								wait(&sum7);
								int cpid8=fork();
								if(cpid8==0){
									for(int i8=700;i8<800;i8++){
										process8+=a[i8];
									}
									sum+=process8;
									exit(sum);
								}
								else{
									sum8=-1;
									wait(&sum8);
									int cpid9=fork();
									if(cpid9==0){
										for(int i9=800;i9<900;i9++){
											process9+=a[i9];
										}
										sum+=process9;
										exit(sum);
									}
									else{
										sum9=-1;
										wait(&sum9);
										for(int i10=900;i10<1000;i10++){
											process10+=a[i10];
										}
										sum+=process10;
									}
							exit(&sum);
								}
							}
						}
					}
				}
			}		
		}
	}
	printf(sum, '\n');
	return 0;
}
