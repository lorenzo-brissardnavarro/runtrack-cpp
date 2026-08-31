# Installation du compilateur C++ sous Windows

## 1. Installer MSYS2

Suivre le guide d'installation officiel :

https://www.msys2.org/

Une fois MSYS2 installé, le mettre à jour :

```bash
pacman -Syu
```

## 2. Ajouter G++ à la variable PATH

### Étapes

1. Appuyer sur **Windows + R** pour ouvrir la fenêtre **Exécuter**.
2. Entrer :

```text
control sysdm.cpl,,3
```

3. Cliquer sur **Variables d'environnement...**
4. Dans **Variables système**, sélectionner **Path**.
5. Cliquer sur **Modifier...**
6. Cliquer sur **Nouveau**.
7. Ajouter :

```text
C:\msys64\ucrt64\bin
```

8. Valider avec **OK** jusqu'à la fermeture des fenêtres.

## 3. Vérifier l'installation

Pour cela :

1. Appuyer sur **Windows + R**.
2. Entrer :

```text
cmd
```

3. Entrer ensuite :

```cmd
g++ --version
```

Si l'installation est correcte, une information similaire à celle-ci doit apparaître :

```text
g++ (Rev5, Built by MSYS2 project) 16.1.0
Copyright (C) 2026 Free Software Foundation, Inc.
```

## 4. Compiler le programme

Ouvrir `cmd` et utiliser la commande `cd` pour se rendre dans le dossier contenant le fichier.

Utiliser `g++` pour compiler le fichier :

```cmd
g++ main.cpp -o main.exe
```

Si aucune erreur n'apparaît, la compilation est terminée.

Un nouveau fichier doit alors être présent dans le dossier :

```text
main.exe
```

## 5. Exécuter le programme

Une fois la compilation terminée, exécuter le programme avec :

```cmd
main.exe
```