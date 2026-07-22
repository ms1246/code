regions = {
    1: "Delhi",
    2: "Uttar Pradesh & Uttarakhand",
    3: "Rajasthan & Gujarat",
    4: "Maharashtra",
    5: "Andhra Pradesh & Telangana",
    6: "Tamil Nadu & Kerala",
    7: "West Bengal & North East",
    8: "Bihar & Jharkhand",
    9: "Army Postal Service"
}

sub_regions = {
    11: "Delhi Region",
    40: "Mumbai Region",
    60: "Chennai Region",
    70: "Kolkata Region"
}

districts = {
    110: "Delhi",       111: "Delhi (North)",      112: "Delhi (South)",
    400: "Mumbai",      401: "Mumbai (Suburban)",   402: "Mumbai (West)",
    600: "Chennai",     601: "Tiruvallur",          602: "Kanchipuram",
    700: "Kolkata",     701: "Kolkata (North)",     702: "Kolkata (South)"
}

def get_pincode_details(pincode):
    if not pincode.isdigit() or len(pincode) != 6:
        print("Invalid pincode. Enter exactly 6 digits.")
        return

    num         = int(pincode)
    first_digit = num // 100000
    first_two   = num // 10000
    first_three = num // 1000

    print("Region:     ", regions.get(first_digit,   "Unknown"))
    print("Sub-region: ", sub_regions.get(first_two, "Unknown"))
    print("District:   ", districts.get(first_three, "Unknown"))


pincode = input("Enter Pincode: ").strip()
get_pincode_details(pincode)
input()