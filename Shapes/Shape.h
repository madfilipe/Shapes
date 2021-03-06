/*+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+,
 * FILE         : Shape.h
 * PROJECT      : OOP - Assignment 7
 * PROGRAMMER   : Filipe Brito
 * FIRST VERSION: 2020-07-17
 *+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-*/


//	Purpose: The purpose of this class is to be a container for other generic and specific types of shapes.

#pragma once


#include <string>


class Shape
{
	/* ===================================== */
	/*                PRIVATE                */
	/* ===================================== */
private:
	/* ------------- ATTRIBUTES ------------ */
	std::string name;	///< Used to store the name of the shape. It can either be Circle, Square or Unknown. If invalid, Unknown is used.
	std::string colour;	///< Used to store the colour of the shape. It can either be red, green, blue, yellow, purple, pink, orange or undefined. If invalid, undefined is used.

	/* ============== METHODS ============== */

	/* ------------- VALIDATOR ------------- */
	bool validateName(std::string name);
	bool validateColour(std::string colour);

	/* ===================================== */
	/*                PUBLIC                 */
	/* ===================================== */
public:

	/* ============== METHODS ============== */

	/* ------------ CONSTRUCTOR ------------ */
	Shape(std::string name, std::string colour);
	Shape();

	/* ------------- DESTRUCTOR ------------ */
	virtual ~Shape();

	/* -------------- ACCESSOR ------------- */
	std::string GetName(void) const;
	std::string GetColour(void) const;

	/* -------------- MUTATOR -------------- */
	void SetName(std::string name);
	void SetColour(std::string colour);

	/* ------------ PURE VIRTUAL ----------- */
	virtual float Perimeter(void) = 0;
	virtual float Area(void) = 0;
	virtual float OverallDimension(void) = 0;
};