// YazılımEkibi_Ödev3_3.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
void convert(int num, int temp)
{
	int kalan = num % temp;

	if (num == 0)
		return;
	convert(num / temp, temp);

	if (kalan < 10)
		printf("%d", kalan);
	else
		printf("%c", kalan - 10 + 'A');
}
enum İvmeÖlçerGrange//decimal
{
	ivme2G =0,ivme4G=1,ivme8G=2,ivme16=3
};
enum İvmeölçerBandwith//decimal
{
	Band7Hz=0,Band15Hz=4,Band31Hz=8,Band62Hz=12,Band125Hz=16,Band250Hz=20,Band500Hz=24,Band100Hz=28
};
enum İvmeölçerOperationMod
{
	Modnormal = 0, Modsuspend = 32, ModLower1 = 64, ModStandBy = 96, ModLower2 = 128, ModDeep = 160
};
enum JiroskopÖlçerGrange//decimal
{
	GJ2000 = 0, GJ1000 = 1, GJ500 = 2, GJ250 = 3,GJ125=4
};
enum JiroskopölçerBandwith//decimal
{
	BandJ523Hz = 0, BandJ230Hz = 8, BandJ116Hz = 16, BandJ47Hz = 24, Band23Hz = 32, BandJ12Hz = 40, BandJ64Hz = 48, BandJ32Hz = 56
};
enum JiroskopOperationMod
{
	ModnormalJ = 0, ModFastJ = 1, ModDeepSusJ = 2, ModSuspendJ = 3, ModAdvancedPowerJ = 4
};
enum ManyometerGGrange//decimal
{
	GM2 = 0, GM6 = 1, GM8 = 2, GM10 = 3, GM15 = 4,GM20=5,GM25=6,GM30=7
};
enum ManyometerPowerMod//decimal
{
	LowPower = 0, Regular = 8, EnchancedRegular = 16, HighAccuracy = 24
};
enum ManyometerOperationMod
{
	Normal = 0, Sleep = 32, Suspend = 64, ForceMod = 96
};


int main()
{
	//ivmeölçer
	int ivmeG = ivme8G;
	int İvmeBand = Band500Hz;
	int İvmeMod = Modnormal;
	int top = ivmeG + İvmeBand + İvmeMod;
	printf("Decimal Ivme Config Value:\n");
	printf("%d\n", top);
	printf("Hexadecimal Ivme Config Value:\n");
	convert(top, 16);
	printf("\n");
	printf("Binary Ivme Config Value:\n");
	convert(top, 2);
	printf("\n");
	//Jiresdkop
	int GJ = GJ1000;
	int BandJ = BandJ230Hz;
	int ModJ = ModDeepSusJ;
	int top1 = GJ + BandJ + ModJ;//11
	printf("Decimal Jireskop Config Value:\n");
	printf("%d\n", top1);
	printf("Hexadecimal Jireskop Config Value:\n");
	convert(top1, 16);
	printf("\n");
	printf("Binary Jireskop Config Value:\n");
	convert(top1, 2);
	printf("\n");
	//Manyometer
	int GM = GM8;
	int PowerMode = Regular;
	int ModM = Suspend;
	int top3 = GM + PowerMode + ModM;//74
	printf("Decimal Jireskop Config Value:\n");
	printf("%d\n", top3);
	printf("Hexadecimal Jireskop Config Value:\n");
	convert(top3, 16);
	printf("\n");
	printf("Binary Jireskop Config Value:\n");
	convert(top3, 2);
	printf("\n");

	




}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
