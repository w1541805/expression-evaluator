#ifndef PSANDS_CISP430_POLYNOMIALTERM_H
#define PSANDS_CISP430_POLYNOMIALTERM_H

#include "Operand.h"
#include <string>

namespace psands_cisp430_a3
{
	class PolynomialTerm
		: public Operand
	{
	private:
		double _coefficient;
		double _exponent;
		Operand * _operand;

	public:
		PolynomialTerm();
		PolynomialTerm(const double coefficient, const double exponent, Operand * operand);
		PolynomialTerm(const PolynomialTerm & polynomialTerm);

		double getCoefficient() const;
		double getExponent() const;
		Operand * getOperand() const;

		void setCoefficient(const double coefficient);
		void setExponent(const double exponent);
		void setOperand(Operand * operand);

		bool canEvaluate();
		double getValue();

		PolynomialTerm operator+(const PolynomialTerm & polynomialTerm);
		PolynomialTerm operator-(const PolynomialTerm & polynomialTerm);
		PolynomialTerm operator*(const PolynomialTerm & polynomialTerm);

		virtual std::string toString() const override;
	};
}


#endif // !PSANDS_CISP430_POLYNOMIALTERM_H