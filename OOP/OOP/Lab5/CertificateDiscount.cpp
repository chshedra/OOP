#include "CertificateDiscount.h"

void CertificateDiscount::SetAmount(double amount)
{
	const int maxCertificateAmount = 10000;
	DoubleValidator::AssertValueInRange(amount, 0, maxCertificateAmount);
	_amount = amount;
}

double CertificateDiscount::GetAmount() 
{ 
	return _amount; 
}

CertificateDiscount::CertificateDiscount(CategoryType category, double amount) :
	DiscountBase(category)
{
	SetAmount(amount);
}

double CertificateDiscount::Calculate(Product& product)
{
	if (product.GetCategory() == DiscountBase::GetCategory())
	{
		double discountPrice = product.GetPrice() - _amount;
		SetAmount(0.0);

		return (discountPrice < 0.0)
			? 0.0
			: discountPrice;
	}

	return product.GetPrice();
}