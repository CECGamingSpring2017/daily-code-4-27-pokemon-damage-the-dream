using namespace std;
double damage(double level, double power, double a, double d, double Modifier);
int main() {
	//made by trevin and jose

	//variable set up
	double damageCalc;
	double level;
	double power;
	double a;
	double d;
	double Modifier;
	//get input from user
	cout << "Enter level, power,attack,defense,and modifier" << endl;
	cin >> level;
	cin >> power;
	cin >> a;
	cin >> d;
	cin >> Modifier;

	damageCalc = damage(level, power, a, d, Modifier);
	cout << "Damage is" << damageCalc << endl;

}
double damage(double level, double power, double a, double d, double Modifier) {
	double damage = ((((2 * level) / 5 + 2) * power*(a / d)) / 50 + 2)*Modifier;
	return damage;
}