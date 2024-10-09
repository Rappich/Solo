// temp_conversions.c
#include "temp_conversion.h"

// Convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

// Convert Celsius to Kelvin
float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

// Convert Kelvin to Celsius
float kelvinToCelsius(float kelvin) {
    return kelvin - 273.15;
}

// Convert Fahrenheit to Kelvin
float fahrenheitToKelvin(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
}

// Convert Kelvin to Fahrenheit
float kelvinToFahrenheit(float kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
}
