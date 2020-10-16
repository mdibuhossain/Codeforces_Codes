while True:
    question = input(
        "1.P - Muldhon(Type P) 2.r- munafar haar% e (Type r) 3.n- Time years e (Type n) 4.I- sorol munafa (Type I) =>"
    )
    if question.upper() == "P":
        r = float(input("r- munafar haar  => %"))
        n = float(input("n- Time years e =>"))
        I = float(input("I- Sorol Munafa =>"))
        P = I / ((r / 100) * n)
        print(f"muldhon {P} Taka")
    elif question.upper() == "R":
        P = float(input("P- muldhon =>"))
        n = float(input("n-Time years e =>"))
        I = float(input("I-sorol munafa =>"))
        r = I / (P * n) * 100
        print(f"munafar haar {r}%")
    elif question.upper() == "N":
        P = float(input("P- muldhon =>"))
        I = float(input("I-sorol munafa =>"))
        r = float(input("r-munafar haar % =>"))
        n = (I * 100) / (P * r)
        print(f"somoy {n} years")
    elif question.upper() == "I":
        P = float(input("P-muldhon =>"))
        r = float(input("r-munafar haar =>"))
        n = float(input("n- Time Years e =>"))
        I = P * (r / 100) * n
        print(f"munafa {I} Taka.")
    else:
        print("Invalid")
