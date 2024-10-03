# Function to calculate Fine Fuel Moisture Code (FFMC)
def FFMC(T, H, P, V):
    if 80 <= T <= 28:
        d = 0.36 * (T - 28)
        FFMC = 85.6 * (100 - H) * (0.1 + 0.00167 * T) * (1 - (1.496 * 10**(-3) * H)) * (0.92 + 0.0027 * V) + d
        if FFMC > 101:
            FFMC = 101
    else:
        FFMC = -1
    return FFMC

# Function to calculate Initial Spread Index (ISI)
def ISI(FFMC, V):
    if FFMC > 0:
        wind_factor = 0.0272 * V
        ISI = (1 - (1 / (1 + 2.8 * (FFMC / 100)))) * (0.4 + 2.5 * V) + wind_factor
        if ISI > 20:
            ISI = 20
    else:
        ISI = -1
    return ISI

# Function to calculate Drought Moisture Code (DMC)
def DMC(T, H, P):
    DMC = (1000 / (9.0 + 0.1 * T)) + (0.1 * P)
    if H > 0.4:
        DMC = DMC + 2.5 * (H - 0.4)
    if DMC > 800:
        DMC = 800
    return DMC

# Function to calculate Drought Code (DC)
def DC(T, P):
    DC = (1000 / (9.0 + 0.1 * T)) + 0.2 * P
    if DC > 600:
        DC = 600
    return DC

# Function to calculate Buildup Index (BUI)
def BUI(DMC, DC):
    BUI = (DMC + DC) / 2
    return BUI

# Function to calculate Fire Weather Index (FWI)
def FWI(ISI, BUI):
    FWI = 0.4 * ISI + 0.6 * BUI
    return FWI

# Main program
temperature = float(input("Enter temperature (T): "))
humidity = float(input("Enter humidity (H): "))
rain = float(input("Enter rainfall (P): "))
wind = float(input("Enter wind speed (V): "))

ffmc = FFMC(temperature, humidity, rain, wind)
isi = ISI(ffmc, wind)
dmc = DMC(temperature, humidity, rain)
dc = DC(temperature, rain)
bui = BUI(dmc, dc)
fwi = FWI(isi, bui)

danger_levels = {
    "Low": (0, 5),
    "Moderate": (5, 10),
    "High": (10, 20),
    "Very high": (20, 30),
    "Extreme": (30, 100)
}

danger_level = None
for level, (lower, upper) in danger_levels.items():
    if lower <= fwi < upper:
        danger_level = level
        break

if danger_level is not None:
    print(f"The danger level is {danger_level}.")

# Assign a color based on danger level
if danger_level == "Low":
    color = "Blue"
elif danger_level == "Moderate":
    color = "Yellow"
else:
    color = "Red"

print(f"Danger index: {fwi:.2f}, State and color: {color}")