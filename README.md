# 📒 Kontaktbuch (C)
![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)

Ein kleines Konsolenprogramm zur Verwaltung von Kontakten in der Programmiersprache C. Es demonstriert die Anwendung von `struct`, dynamischer Speicherverwaltung sowie Dateioperationen (`file I/O`).

---

## 🛠️ Funktionen

- ➕ Kontakte hinzufügen (Name + Telefonnummer)
- 📄 Anzeige aller gespeicherten Kontakte
- 💾 Speichern der Kontakte in einer Datei (`kontakte.dat`)
- 📂 Laden der Kontakte beim Programmstart
- 📌 Einfache Konsoleninteraktion

---

## 💻 Technologien

- Programmiersprache: **C**
- Speicherverwaltung: **dynamisch**
- Dateiverwaltung: **binäre Datei mit `fopen`, `fread`, `fwrite`**
- Versionierung: **Git & GitHub**

---

## 🧪 Kompilieren

```bash
gcc main.c kontaktbuch.c -o kontaktbuch.exe
