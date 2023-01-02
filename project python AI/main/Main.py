import pyttsx3  # install
import speech_recognition as sr  # install
import datetime
import wikipedia  # install
import webbrowser
import os
import smtplib


print("initiealizing Siro")

MASTER = "putra"

engine = pyttsx3.init("sapi5")

voices = engine.getProperty("voices")
engine.setProperty("voices", voices[0].id)

# speak


def speak(text):
    engine.say(text)
    engine.runandwait()

# func


def wishMe():
    hour = int(datetime.datetime.now().hour)
    if (hour >= 0 and hour < 12):
        speak("Selamat Pagi...", MASTER)
    elif (hour >= 12 and hour < 18):
        speak("Selamat Sore...", MASTER)
    else:
        speak("Selamat Malam...", MASTER)
        speak('')

# mic


def takeCommend():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening... ")
        audio = r.listen(source)

    try:
        print("Recognizing...")
        query = r.recognize_google(audio, language="en-us")
        print(f"user said: (query)\n ")

    except Exception as e:
        print("ulangi lagi... pliss!!!")
        query = None

    return query


# main start
speak("Hy.. nama saya Siro, ada yang bisa saya bantu...! ")
wishMe()
query = takeCommend()

# logic for tasks as query
if ("wikipedia" in query.lower()):
    speak("searching wikipedia... ")
    query = query.replace("wikipedia", "")
    results = wikipedia.summary(query, sentences=2)
    print(results)
    speak(results)
