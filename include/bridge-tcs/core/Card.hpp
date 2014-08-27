#ifndef BRIDGETCS_CORE_CARD_HPP
#define BRIDGETCS_CORE_CARD_HPP

namespace bridge_tcs {
namespace core {

enum class Rank 
{
	TWO,
	THREE,
	FOUR,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN,
	JACK,
	QUEEN,
	KING,
	ACE
};

enum class Suit 
{
	CLUBS,
	DIAMONDS,
	HEARTS,
	SPADES
};

struct Card
{
	Rank rank;
	Suit suit;

	Card(Rank r, Suit s) : rank(r), suit(s)
	{
	}
};

} //namespace core
} //namespace bridge_tcs

#endif // BRIDGETCS_CORE_CARD_HPP
