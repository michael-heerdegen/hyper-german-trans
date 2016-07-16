// HyperRogue German translation        -*-coding: utf-8-dos -*-
// by Jeffrey Smith, Arriator, Phillip 'TheGons' Gonsior and Michael Heerdegen
// Copyright (C) 2011-2016 Zeno Rogue, see 'hyper.cpp' for details

// This translation file is encoded with UTF-8.  It is currently
// hosted at https://github.com/michael-heerdegen/hyper-german-trans.
// Please send improvements and bug reports directly to
// michael_heerdegen@web.de (in English or German) or via Github -
// any help is welcome!


// Nouns.

// For each noun in English, provide:

// 1) the type (usually gender) of the noun. For example, in Polish each noun can be:

// masculine living (GEN_M),
// masculine object (GEN_O), //FIXME: do we need this?
// feminine (GEN_F), or
// neuter (GEN_N).

// 2) all the forms required by HyperRogue. The following forms are given:
// nominative (referred to as %1),
// nominative plural (%P1),
// accusative (%a1),
// dative (%d1; for land names, "in (der/den) ..." should be given).

// Feel free to add more or less forms or types if needed. Note that you don't
// have to provide all the forms in your language, only those used by HyperRogue
// (in Polish just 4 of 14 forms are used, and this is probably similar in other
// languages).  The forms being replaced are defined in language.cpp; search for
// "if(l == 5)".

// monsters
N("Yeti", GEN_M, "Yeti", "Yetis", "Yeti")
N("Icewolf", GEN_M, "Eiswolf", "Eiswölfe", "Eiswolf")
N("Ranger",  GEN_M, "Ranger", "Ranger", "Ranger")
N("Rock Troll", GEN_M, "Steintroll", "Steintrolle", "Steintroll")
N("Goblin", GEN_M, "Goblin", "Goblins", "Goblin")
N("Sand Worm", GEN_M, "Sandwurm ", "Sandwürmer", "Sandwurm")
N("Sand Worm Tail", GEN_M, "Sandwurm Schweif", "Sandwurm Schweife", "Sandwurm Schweif")
N("Sand Worm W", GEN_M, "Sandwurm W", "Sandwürmer W", "Sandwurm W")
N("Desert Man", GEN_M, "Wüstenläufer", "Wüstenläufer", "Wüstenläufer")
N("Ivy Root", GEN_F, "Efeu Wurzel", "Efeu Wurzeln", "Efeu Wurzel")
N("Active Ivy", GEN_M, "Lebender Efeu", "Lebende Efeue", "Lebenden Efeu")
N("Ivy Branch", GEN_M, "Efeuzweig", "Efeuzweige", "Efeuzweig")
N("Dormant Ivy", GEN_M, "Ruhender Efeu", "Ruhende Efeue", "Ruhenden Efeu")
N("Ivy N", GEN_M, "Efeu N", "Efeue N", "Efeu N")
N("Ivy D", GEN_M, "Efeu D", "Efeue D", "Efeu D")
N("Giant Ape", GEN_M, "Riesenaffe", "Riesenaffen", "Riesenaffen")
N("Slime Beast", GEN_F, "Schleimbestie", "Schleimbestien", "Schleimbestie")
N("Mirror Image", GEN_N, "Spiegelbild", "Spiegelbilder", "Spiegelbild")
N("Mirage", GEN_F, "Luftspiegelung", "Luftspiegelungen", "Luftspiegelung")
N("Golem", GEN_M, "Golem", "Golems", "Golem")
N("Eagle", GEN_M, "Adler", "Adler", "Adler")
N("Seep", GEN_M, "Tropfer", "Tropfer", "Tropfer")
N("Zombie", GEN_M, "Zombie", "Zombies", "Zombie")
N("Ghost", GEN_M, "Geist", "Geister", "Geist")
N("Necromancer", GEN_M, "Totenbeschwörer", "Totenbeschwörer", "Totenbeschwörer")
N("Shadow", GEN_M, "Schatten", "Schatten", "Schatten")
N("Tentacle", GEN_F, "Tentakel", "Tentakel", "Tentakel")
N("Tentacle Tail", GEN_M, "Tentakel Schweif", "Tentakel Schweif", "Tentakel Schweif")
N("Tentacle W", GEN_M, "Tentakel W", "Tentakel W", "Tentakel W")
N("Tentacle (withdrawing)", GEN_M, "Fliehende Tentakel", "Fliehenden Tentakel", "Fliehende Tentakel")
N("Cultist", GEN_M, "Anhänger", "Anhänger", "Anhänger")
N("Fire Cultist", GEN_M, "Anhänger des Feuers", "Anhänger des Feuers", "Anhänger des Feuers")
N("Greater Demon", GEN_M, "Mächtige Dämon", "Mächtigen Dämonen", "Mächtige Dämon")
N("Lesser Demon", GEN_M, "Gewöhnliche Dämon", "Gewöhnlichen Dämonen", "Gewöhnlichen Dämon")
N("Ice Shark", GEN_M, "Frosthai", "Frosthaie", "Frosthai")
N("Running Dog", GEN_M, "Rennende Hund", "Rennenden Hunde", "Rennenden Hund")
N("Demon Shark", GEN_M, "Dämonenhai", "Dämonenhaie", "Dämonenhai")
N("Fire Fairy", GEN_F, "Feuerfee", "Feuerfeen", "Feuerfee")
N("Crystal Sage", GEN_M, "Kristallweise", "Kristallweisen", "Kristallweisen")
N("Hedgehog Warrior", GEN_M, "Igelkrieger", "Igelkrieger", "Igelkrieger")
// items
N("Ice Diamond", GEN_M, "Frostdiamant", "Frostdiamanten", "Frostdiamant")
N("Gold", GEN_N, "Gold", "Gold", "Gold")
N("Spice", GEN_N, "Spice", "Spice", "Spice")
N("Ruby", GEN_M, "Rubin", "Rubine", "Rubin")
N("Elixir of Life", GEN_N, "Lebenselixir", "Lebenselixir", "Lebenselixir")
N("Shard", GEN_F, "Scherbe", "Scherben", "Scherbe")
N("Necromancer's Totem", GEN_N, "Totenbeschwörer-Totem", "Totenbeschwörer-Totems", "Totenbeschwörer-Totem")
N("Demon Daisy", GEN_M, "Dämonenblümchen", "Dämonenblümchen", "Dämonenblümchen")
N("Statue of Cthulhu", GEN_F, "Cthulhu Statue", "Cthulhu Statuen", "Cthulhu Statue")
N("Phoenix Feather", GEN_F, "Phönixfeder", "Phönixfedern", "Phönixfeder")
N("Ice Sapphire", GEN_M, "Frostsaphir", "Frostsaphire", "Frostsaphir")
N("Hyperstone", GEN_M, "Hyperstein", "Hypersteine", "Hyperstein")
N("Key", GEN_M, "Schlüssel", "Schlüssel", "Schlüssel")
N("Dead Orb", GEN_M, "Orb der Toten", "Orbs der Toten", "Orb der Toten")
N("Fern Flower", GEN_M, "Farnblüte", "Farnblüten", "Farnblüte")
// orbs: we are using a macro here
#define Orb(E, P) N("Orb of " E, GEN_M, "Orb " P, "Orbs " P, "Orb " P)
Orb("Yendor", "des Yendor")
Orb("Storms", "des Sturms")
Orb("Flash", "des Blitzes")
Orb("Winter", "des Winters")
Orb("Speed", "der Geschwindigkeit")
Orb("Life", "des Lebens")
Orb("Shielding", "der Abschirmung")
Orb("Teleport", "der Teleportation")
Orb("Safety", "der Geborgenheit")
Orb("Thorns", "der Dornen")
// terrain features
N("none", GEN_O, "keines", "keines", "keines")
N("ice wall", GEN_F, "Eiswand", "Eiswände", "Eiswand")
N("great wall", GEN_F, "Große Mauer", "Großen Mauern", "Große Mauer")
N("red slime", GEN_M, "Roter Schleim", "Roten Schleime", "Roten Schleim")
N("blue slime", GEN_M, "Blauer Schleim", "Blauen Schleime", "Blauen Schleim")
N("living wall", GEN_F, "Lebende Wand", "Lebende Wände", "Lebende Wand")
N("living floor", GEN_M, "Lebender Boden", "Lebende Böden", "Lebender Boden")
N("dead troll", GEN_M, "Toter Troll" ,"Tote Trolle", "Toten Troll")
N("sand dune", GEN_F, "Sanddüne", "Sanddünen", "Sanddüne")
N("Magic Mirror", GEN_M, "Zauberspiegel", "Zauberspiegel", "Zauberspiegel")
N("Cloud of Mirage", GEN_F, "Illusionswolke", "Illusionswolken", "Illusionswolke")
N("Thumper", GEN_M, "Stampfer", "Stampfer", "Stampfer")
N("Bonfire", GEN_N, "Leuchtfeuer", "Leuchtfeuer", "Leuchtfeuer")
N("ancient grave", GEN_M, "Antike Grab", "Antike Gräber", "Antike Grab")
N("fresh grave", GEN_M, "Frische Grab", "Frische Gräber", "Frisches Grab")
N("column", GEN_M, "Riss", "Risse", "Riss")
N("lake of sulphur", GEN_M, "Schwefelsee", "Schwefelseen", "Schwefelsee")
N("lake", GEN_M, "See", "Seen", "See")
N("frozen lake", GEN_M, "Gefrorene See", "Gefrorene Seen", "Gefrorene See")
N("chasm", GEN_M, "Abgrund", "Abgründe", "Abgrund")
N("big tree", GEN_M, "Großer Baum", "Große Bäume", "Großer Baum")
N("tree", GEN_M, "Baum", "Bäume", "Baum")
// lands
N("Great Wall", GEN_F, "Große Mauer", "Großen Mauern", "auf der Großen Mauer")
N("Crossroads", GEN_F, "Kreuzungen", "Kreuzungen", "auf den Kreuzungen") // FIXME: what sex to use here (plural...?)
N("Desert", GEN_F, "Wüste", "Wüsten", "in der Wüste")
N("Icy Land", GEN_N, "Eisiges Land", "Eisige Länder", "im Eisigen Land")
N("Living Cave", GEN_F, "Lebendige Höhle", "Lebendige Höhlen", "in der Lebendigen Höhle")
N("Jungle", GEN_M, "Dschungel", "Dschungel", "im Dschungel")
N("Alchemist Lab", GEN_M, "Alchemielabor", "Alchemielabore", "im Alchemielabor")
N("Mirror Land", GEN_M, "Spiegelland", "Spiegelländer", "im Spiegelland")
N("Graveyard", GEN_M, "Friedhof", "Friedhöfe", "auf dem Friedhof")
N("R'Lyeh", GEN_N, "R'Lyeh", "R'Lyeh",  "in R'Lyeh")
N("Hell", GEN_F, "Hölle", "Höllen", "in der Hölle")
N("Cocytus", GEN_M, "Kokytus", "Kokytus", "im Kokytus")
N("Land of Eternal Motion", GEN_N, "Land des endlosen Antriebs", "Länder des endlosen Antriebs", "im Land des endlosen Antriebs")
N("Dry Forest", GEN_M, "Trockenwald", "Trockenwälder", "im Trockenwald")
N("Game Board", GEN_N, "Spielbrett", "Spielbretter", "auf dem Spielbrett")

// Game messages

// fighting messages

// For each English form, provide a Polish form. Player is referred to via %...0,
// and objects are referred to via %...1 and %...2. For example, in Polish:

// %a1 refers to the accusative form of the first object (as explained above in 'Nouns')
// likewise, %a2 refers to the accusative form of the second object
// %?1 is replaced by "?", "?o" or "?a", depending on the gender of %1
// %?e?0 adds "?e?" or "?a?" depending on the gender of the player

// Use whatever %xxx# codes you need for your language. Of course,
// tell me how your codes should be expanded.

S("You kill %the1.", "Du tötest %den1 %a1.")
S("You would be killed by %the1!", "%Der1 %1 würde dich töten!")
S("%The1 would get you!", "%Der1 %1 würde dich fangen!")
S("%The1 destroys %the2!", "%Der1 %1 zerstört %den2 %a2!")
S("%The1 eats %the2!", "%Der1 %1 frisst %den2 %a2!")
S("The ivy destroys %the1!", "Der Efeu zerstört %den1 %a1!")
S("%The1 claws %the2!", "%Der1 %1 zerschlitzt %den2 %a2!")
S("%The1 scares %the2!", "%Der1 %1 erschreckt %den2 %a2!")
S("%The1 melts away!", "%Der1 %1 schmilzt!")
S("%The1 stabs %the2.", "%Der1 %1 ersticht %den2 %a2.")
S("You stab %the1.", "Du erstichst %den1 %a1.")
S("You cannot attack %the1 directly!", "Du kannst %den1 %a1 nicht direkt angreifen!")
S("Stab them by walking around them.", "Erstich sie, indem du um sie herumgehst.")
S("You feel more experienced in demon fighting!", "Du fühlst dich erfahrener im Kampf gegen Dämonen!")
S("Cthulhu withdraws his tentacle!", "Cthulhu zieht seinen Tentakel zurück!")
S("The sandworm explodes in a cloud of Spice!", "Der Sandwurm explodiert in einer Wolke aus Spice")
S("%The1 is confused!", "%Der1 %1 ist verwirrt.")
S("%The1 raises some undead!", "%Der1 %1 beschwört die Toten!")
S("%The1 throws fire at you!", "%Der1 %1 wirft Feuer nach dir!")
S("%The1 shows you two fingers.", "%Der1 %1 zeigt dir zwei Finger.")
S("You wonder what does it mean?", "Du wunderst dich, was es bedeutet.")
S("%The1 shows you a finger.", "%Der1 %1 zeigt dir einen Finger.")
S("You think about possible meanings.", "Du denkst über die Bedeutung nach.")
S("%The1 moves his finger downwards.", "%Der1 %1 bewegt seinen Finger nach unten.")
S("Your brain is steaming.", "Dein Hirn dampft!")
S("%The1 destroys %the2!", "%Der1 %1 zerstört %den2 %a2!")
S("You join %the1.", "Du führst die %P1 zusammen.")
S("Two of your images crash and disappear!", "Zwei %P1 stürzen gegeneinander!")
S("%The1 breaks the mirror!", "%Der1 %1 zerstört den Spiegel!")
S("%The1 disperses the cloud!", "%Der1 %1 löst die Wolke auf!")
S("You activate the Flash spell!", "Du aktivierst den Blitz Zauber!")
S("You activate the Lightning spell!", "Du aktivierst den Donner Zauber!")
S("Ice below you is melting! RUN!", "Das Eis unter dir schmilz! RENN!")
S("This spot will be burning soon! RUN!", "Dieser Ort wird bald in Flammen stehen - RENN!")
S("The floor has collapsed! RUN!", "Der Boden bricht zusammen - RENN!")
S("You need to find the right Key to unlock this Orb of Yendor!",
  "Du musst den richtigen Schlüssel finden, um den Orb von Yendor zu öffnen!")
S("You fall into a wormhole!", "Du fällst in ein Wurmloch!")
S("You activate %the1.", "Du aktivierst %den1 %a1.")
S("No room to push %the1.", "Kein Platz um %den1 %a1 zu schieben.")
S("You push %the1.", "Du schiebst %den1 %a1.")
S("You start cutting down the tree.", "Du fängst an, den Baum zu fällen.")
S("You cut down the tree.", "Du fällst den Baum.")
S("You cannot attack Sandworms directly!", "Du kannst Sandwürmer nicht direkt angreifen!")
S("You cannot attack Tentacles directly!", "Du kannst Tentakel nicht direkt angreifen!")
S("You cannot defeat the Shadow!", "Du kannst den Schatten nicht besiegen!")
S("You cannot defeat the Greater Demon yet!", "Du kannst den Mächtigen Dämon noch nicht besiegen!")
S("That was easy, but groups could be dangerous.", "Das war einfach, aber mehrere könnten gefährlich sein.")
S("Good to know that your fighting skills serve you well in this strange world.", "Gut zu wissen, dass deine Kampfkünste dir in dieser ungewöhnlichen Welt helfen.")
S("You wonder where all these monsters go, after their death...", "Du wunderst dich, was mit den Monstern passiert nachdem sie sterben...")
S("You feel that the souls of slain enemies pull you to the Graveyard...", "Du hast das Gefühl, dass die Seelen gefallener Gegner dich zum Friedhof führen...")
S("Wrong color!", "Falsche Farbe!")
S("You cannot move through %the1!", "Du kannst nicht durch %den1 %a1 gehen!")
S("%The1 would kill you there!", "%Der1 %1 würde dich dort töten!")
S("Wow! %1! This trip should be worth it!", "Wow, %1! Diese Reise lohnt sich!")
S("For now, collect as much treasure as possible...", "Aber sammle vorerst so viele Schätze wie möglich.")
S("Prove yourself here, then find new lands, with new quests...", "Beweise hier deine Fähigkeiten und finde dann neue Länder mit neuen Aufgaben....")
S("You collect your first %1!", "Du hast dein erstes mal %a1 eingesammelt!") // FIXME
S("You have found the Key! Now unlock this Orb of Yendor!", "Du hast den Schlüssel gefunden! Zeit den Orb von Yendor zu öffnen!")
S("This orb is dead...", "Dieser Orb ist tot...")
S("Another Dead Orb.", "Ein weiterer toter Orb.")
S("You have found %the1!", "Du hast %den1 %a1 gefunden!")
S("You feel that %the2 become%s2 more dangerous.", "Du spürst, dass %der2 %2 gefährlicher wird,")
S("With each %1 you collect...", "mit jedem gesammelten %d1") // FIXME: Grammar
S("Are there any magical orbs in %the1?...", "Gibt es irgendwelche Orbs in %dem1 %d1?") // FIXME
S("You feel that %the1 slowly become%s1 dangerous...", "Du spürst wie %der1 %1 langsam gefährlich wird...")
S("Better find some other place.", "Du solltest besser einen anderen Ort finden.")
S("You have a vision of the future, fighting demons in Hell...", "Du hast eine Vision, du wirst in der Zukunft Dämonen in der Hölle bekämpfen...")
S("With this Elixir, your life should be long and prosperous...", "Mit diesem Elixir sollte dein Leben lang und wohlhabend sein...")
S("The Necromancer's Totem contains hellish incantations...", "Das Totenbeschwörer-Totem enthält diabolische Zaubersprüche...")
S("The inscriptions on the Statue of Cthulhu point you toward your destiny...", "Die Inschrift auf Cthulhus Statue zeigt dir den Weg zu deinem Schicksal...")
S("Still, even greater treasures lie ahead...", "Dich erwarten größere Schätze auf deinem Weg")
S("You collect %the1.", "Du sammelst %den1 %a1.")
S("CONGRATULATIONS!", "GRATULATION!")
S("Collect treasure to access more different lands...", "Sammle Schätze um andere Länder zu erreichen...")
S("You feel that you have enough treasure to access new lands!", "Du spürst, dass du genug Schätze gesammelt hast um neue Länder zu erreichen!")
S("Collect more treasures, there are still more lands waiting...", "Sammle mehr Schätze, es warten weitere Länder auf dich...")
S("You feel that the stars are right, and you can access R'Lyeh!", "Die Sterne stehen günstig, du kannst R´Lyeh erreichen!")
S("Kill monsters and collect treasures, and you may get access to Hell...", "Wenn du Monster tötest und Schätze sammelst erhältst du vielleicht Zutritt zur Hölle...")
S("To access Hell, collect 10 treasures each of 9 kinds...", "Um die Hölle zu erreichen sammle je 10 von 9 verschiedenen Schätzen...")
S("Abandon all hope, the gates of Hell are opened!", "Gib jegliche Hoffnung auf, die Pforte der Hölle ist geöffnet!")
S("And the Orbs of Yendor await!", "Und die Orbs von Yendor erwarten dich!")
S("You switch places with %the1.", "Du tauschst den Platz mit %dem1 %a1.")
S("You rejoin %the1.", "Du stößt wieder zu %den1 %a1 hinzu")
S("The mirror shatters!", "Der Spiegel zerbricht")
S("The cloud turns into a bunch of images!", "Die Wolke verwandelt sich in mehrere Bilder!")
S("The slime reacts with %the1!", "Der Schleim reagiert mit %dem %d1!")
S("You drop %the1.", "Du legst %den1 %a1 ab.")
S("You feel great, like a true treasure hunter.", "Du fühlst dich großartig, wie ein echter Schatzjäger.")
S("Your eyes shine like gems.", "Deine Augen funkeln wie Edelsteine.")
S("Your eyes shine as you glance at your precious treasures.", "Deine Augen strahlen als du die Schätze erblickst.")
S("You glance at your great treasures.", "Du betrachtest deine kostbaren Schätze.")
S("You glance at your precious treasures.", "Du betrachtest deine kostbaren Schätze.")
S("You glance at your precious treasure.", "Du betrachtest deine kostbaren Schätze.")
S("Your inventory is empty.", "Dein Inventar ist leer.")
S("You teleport to a new location!", "Du teleportierst dich an einen neuen Ort!")
S("Could not open the score file: ", "Highscores konnten nicht geladen werden: ")
S("Game statistics saved to %1", "Statistiken nach %1 gespeichert")
S("Game loaded.", "Spiel geladen.")
S("You summon some Mimics!", "Du beschwörst ein paar Mimics!")
S("You summon a golem!", "Du beschwörst einen Golem!")
S("You will now start your games in %1", "Du startest deine Spiele von nun an in %a1")
S("Activated the Hyperstone Quest!", "Hyperstein Quest aktiviert!")
S("Orb power depleted!", "Du hast die Kraft des Orbs aufgebraucht!")
S("Orbs summoned!", "Orbs beschworen!")
S("Orb power gained!", "Orb Kraft erhalten!")
S("Dead orbs gained!", "Tote Orbs erhalten!")
S("Orb of Yendor gained!", "Orb von Yendor erhalten!")
S("Treasure gained!", "Schatz erhalten!")
S("Lots of treasure gained!", "Eine Menge Schätze erhalten!")
S("You summon a sandworm!", "Du beschwörst einen Sandwurm!")
S("You summon an Ivy!", "Du beschwörst Efeu!")
S("You summon a monster!", "Du beschwörst ein Monster!")
S("You summon some Thumpers!", "Du beschwörst ein paar Stampfer!")
S("You summon a bonfire!", "Du beschwörst ein Leuchtfeuer!")
S("Treasure lost!", "Schatz verloren!")
S("Kills gained!", "Kills erhalten!")
S("Activated Orb of Safety!", "Orb der Geborgenheit aktiviert!")
S("Teleported to %1!", "Nach %1 teleportiert")

S("Welcome to HyperRogue", "Willkommen bei HyperRogue")
S(" for Android", " für Android")
S(" for iOS", " für iOS")
S("! (version %1)\n\n", "! (Version %1)\n\n")
S(" (press ESC for some hints about it).", " (Drücke ESC für Hinweise).")
S("Press 'c' for credits.", "Drücke 'c' für die Credits")
S("game design, programming, texts and graphics by Zeno Rogue <zeno@attnam.com>\n\n",
  "Design, Programmierung, Texte und Grafik: Zeno Rogue \n\n")
S("add credits for your translation here", "Deutsche Übersetzung: Jeffrey Smith, Arriator und Phillip 'TheGons' Gonsior \n\n")
S(" (touch to activate)", " (Zum Aktivieren tippen)")
S(" (expired)", " (abgelaufen)")
S(" [%1 turns]", " [%1 Züge]")
S(", you", ", du")
S("0 = Klein model, 1 = Poincaré model", "0 = Klein Modell, 1 = Poincaré Modell")
S("you are looking through it!", "Du fängst an zu verstehen!")
S("simply resize the window to change resolution", "Einfach die Fenstergröße anpassen um die Auflösung zu ändern")
S("[+] keep the window size, [-] use the screen resolution", "[+] Fenstergröße behalten, [-] Bildschirmauflösung verwenden")
S("+5 = center instantly, -5 = do not center the map", "+5 = sofort zentrieren, -5 = nicht zentrieren")
S("press Space or Home to center on the PC", "Drücke LEER oder Pos1 um den Spieler zu fokussieren")
S("You need special glasses to view the game in 3D", "Du benötigst eine 3D Brille für den 3D Modus")
S("You can choose one of the several modes", "Du kannst einen der verschiedenen Modi auswählen")
S("ASCII", "ASCII")
S("black", "schwarz")
S("plain", "schlicht")
S("Escher", "Escher")
S("items only", "nur Items")
S("items and monsters", "Items und Monster")
S("no axes", "keine Achsen")
S("auto", "auto")
S("light", "einfach")
S("heavy", "schwierig")
S("The axes help with keyboard movement", "Die Achsen helfen mit der Tastatursteuerung")
S("Config file: %1", "Confiq Datei: %1")
S("joystick mode: automatic (release the joystick to move)", "Joystick: Automatisch (loslassen zum bewegen)")
S("joystick mode: manual (press a button to move)", "Joystick: Manuell (Knopf drücken zum bewegen)")
S("Reduce the framerate limit to conserve CPU energy", "Reduzieren des Framerate Limits spart CPU Energie")
S("Press F1 or right click for help", "F1 oder Rechtsklick für Hilfe")
S("No info about this...", "Keine Info hierüber...")
S("Press Enter or F10 to save", "Drücke Enter oder F10 zum Speichern")
S("Press Enter or F10 to quit", "Drücke Enter oder F10 zum Verlassen des Spiels")
S("or 'r' or F5 to restart", "oder 'r' oder F5 zum Neustarten")
S("or 't' to see the top scores", "oder 't' für die Highscore Liste")
S("or another key to continue", "oder eine beliebige andere Taste zum Fortfahren.")
S("It is a shame to cheat!", "Cheaten ist eine Schande!")
S("Showoff mode", "Angeber Modus")
S("Quest status", "Queststatus")
S("GAME OVER", "GAME OVER")
S("Your score: %1", "Punkte: %1")
S("Enemies killed: %1", "Getötete Gegner: %1")
S("Orbs of Yendor found: %1", "Orbs von Yendor gefunden: %1")
S("Collect 30 $$$ to access more worlds", "Sammle 30 $$$ um mehr Länder betreten zu können")
S("Collect at least 10 treasures in each of 9 types to access Hell", "Sammle 9 verschiedene Schätze mindestens 10x um Zugang zur Hölle zu erhalten")
S("Collect at least 10 Demon Daisies to find the Orbs of Yendor", "Sammle mindestens 10 Dämonenblümchen um die Orbs von Yendor zu finden")
S("Hyperstone Quest: collect at least 10 %1 in %the2", "Hyperstein Quest: Sammle 10 %1 %a2")
S("Hyperstone Quest completed!", "Hyperstein Quest abgeschlossen!")
S("Look for the Orbs of Yendor in Hell or in the Crossroads!", "Such die Orbs von Yendor in der Hölle oder auf den Kreuzungen!")
S("Unlock the Orb of Yendor!", "Öffne den Orb von Yendor!")
S("Defeat 100 enemies to access the Graveyard", "Töte 100 Gegner um Zugang zum Friedhof zu erhalten")
S("(press ESC during the game to review your quest)", "(Drücke ESC während des Spiels, um deine aktuelle Quest anzuzeigen)")
S("you have cheated %1 times", "Du hast %1 mal Cheats benutzt")
S("%1 turns (%2)", "%1 Züge (%2)")
S("last messages:", "Letzte Nachrichten: ")
S("time elapsed", "Zeit")
S("date", "Datum")
S("treasure collected", "Gesammelte Schätze")
S("total kills", "Gesamt Kills")
S("turn count", "Anzahl der Züge")
S("cells generated", "Generierte Zellen")
S("t/left/right - change display, up/down - scroll, s - sort by", " T/Links/Rechts - Anzeige ändern, Oben/Unten - Scrollen, S - Sortieren nach")
S("kills", "kills")
S("time", "zeit")
S("ver", "ver")
S("SORT", "SORT")
S("PLAY", "START")
S("Your total wealth", "Dein Gesamtvermögen")
S("treasure collected: %1", "Schätze gesammelt: %1")
S("objects found: %1", "Objekte gefunden: %1")
S("orb power: %1", "Orb Kraft: %1")
S(" (click to drop)", " (Klicke zum Ablegen)")
S("You can also scroll to the desired location and then press 't'.", "Du kannst auch an die gewünschte Position scrollen und 't' drücken.")
S("Thus, it is potentially useful for extremely long games, which would eat all the memory on your system otherwise.\n",
  "Dies ist nützlich für sehr lange Spiele, welche ansonsten viel Speicher nutzen würden.")
S("You can touch the Dead Orb in your inventory to drop it.", "Du kannst den toten Orb in deinem Inventar berühren, um ihn abzulegen.")
S("This might be useful for Android devices with limited memory.", "Könnte für Android-Geräte mit begrenztem Speicher nützlich sein.")
S("You can press 'g' or click them in the list to drop a Dead Orb.", "Du kannst 'g' drücken oder sie in der Liste anklicken um tote Orbs fallenzulassen.")
S("frames per second", "FPS")
S("monsters killed: %1", "Kills: %1")
S("Drawing %1 (layer %2), F1 for help", "Zeichne %1 (Schicht %2), F1 für Hilfe")
S("hepta floor", "Heptagonaler Boden")
S("hexa floor", "Hexagonaler Boden")
S("character", "Character")
S("ESC for menu/quest", "ESC für Menü/Quest")
S("vector graphics editor", "Vektoren-Grafiken-Editor")
S("cheat mode", "Cheats")
S("heptagonal game board", "Heptagonales Spielbrett")
S("triangular game board", "Triangulares Spielbrett")
S("HyperRogue game board", "HyperRogue-Spielbrett")
S("first page [Space]", "Erste Seite [LEER]")
S("exit configuration", "Einstellungen verlassen")
S("Configuration:", "Einstellungen:")
S("video resolution", "Videoauflösung")
S("fullscreen mode", "Vollbild")
S("animation speed", "Animationsgeschwindigkeit")
S("dist from hyperboloid ctr", "Entf. vom hyperbolischen Zentrum")
S("scale factor", "Skalierungsfaktor")
S("wall display mode", "Anzeigemodus (Wände)")
S("monster display mode", "Anzeigemodus (Monster)")
S("cross display mode", "Anzeigemodus (Kreuz)")
S("background music volume", "Hintergrundmusik")
S("OFF", "AUS")
S("ON", "EIN")
S("distance between eyes", "Augen Abstand")
S("framerate limit", "Framerate Limit")
S("joystick mode", "Joystick")
S("automatic", "automatisch")
S("manual", "manuell")
S("language", "Sprache")
S("EN", "DE")
S("player character", "Charakter")
S("male", "männlich")
S("female", "weiblich")
S("use Shift to decrease and Ctrl to fine tune ", "Shift zum Verringern, Strg zum feinen")
S("(e.g. Shift+Ctrl+Z)", "Ändern (z.B. Strg+Shift+Z)")
S("the second page [Space]", "Zweite Seite [LEER]")
S("special features [Space]", "Spezielle Features [LEER]")
S("exit configuration", "Einstellungen verlassen")
S("see the help screen", "siehe Hilfe Bildschirm")
S("save the current config", "momentane Einstellungen speichern")
S("(v) config", "(v) Konfig.")
S("Screenshot saved to %1", "Screenshot nach %1 gespeichert")
S("You need an Orb of Teleport to teleport.", "Du brauchst einen Orb der Teleportation um dich zu teleportieren.")
S("Use arrow keys to choose the teleport location.", "Benutze die Pfeiltasten um dein Teleportations Ziel zu wählen.")
S("openGL mode enabled", "OpenGL aktiviert")
S("openGL mode disabled", "OpenGL deaktiviert")
S("openGL & antialiasing mode", "OpenGL & Anti-Aliasing")
S("anti-aliasing enabled", "Anti-Aliasing aktiviert")
S("anti-aliasing disabled", "Anti-Aliasing deaktiviert")
S("You activate your demonic powers!", "Du aktivierst deine dämonischen Kräfte!")

// Steam achievement messages

S("New Achievement:", "Neues Achievement:")
S("Your total treasure has been recorded in the Steam Leaderboards.", "Deine Gesamtschätze wurden in die Steam Highscoreliste aufgenommen.")
S("Congratulations!", "Gratulation!")
S("You have improved your total high score and %1 specific high scores!", "Du hast deinen Gesamthighscore und %1 spezifische Highscores verbessert!")
S("You have improved your total and '%1' high score!", "Du hast deinen Gesamthighscore und '%1' Highscore verbessert!")
S("You have improved your total high score on Steam. Congratulations!", "Du hast deinen Gesamthighscore auf Steam verbessert! Gratulation!")
S("You have improved %1 of your specific high scores!", "Du hast %1 deiner spezifischen Highscores verbessert!")
S("You have improved your '%1' high score on Steam!", "Du hast deinen Highscore bei '%1' auf Steam verbessert!")
S("You have collected 10 treasures of each type.", "Du hast 10 Schätze jedes Typs gesammelt.")
S("This is your first victory!", "Dies ist dein erster Sieg!")
S("This has been recorded in the Steam Leaderboards.", "Dies wurde in den Steam Leaderboards vermerkt.")
S("The faster you get here, the better you are!", "Je schneller du es hierher schaffst, desto besser bist du!")
S("You have improved both your real time and turn count. Congratulations!", "Du hast sowohl weniger Echtzeit als auch Züge als je zuvor benötigt. Gratulation!")
S("You have used less real time than ever before. Congratulations!", "Du hast weniger Echtzeit als je zuvor benötigt. Gratulation!")
S("You have used less turns than ever before. Congratulations!", "Du hast sowohl weniger Züge als je zuvor benötigt. Gratulation!")

// help texts. These are separated into multiple lines just for convenience,
// you don't have to follow.

S("You have been trapped in a strange, non-Euclidean world. Collect as much treasure as possible "
  "before being caught by monsters. The more treasure you collect, the more "
  "monsters come to hunt you, as long as you are in the same land type. The "
  "Orbs of Yendor are the ultimate treasure; get at least one of them to win the game!",

  "Du wurdest in einer seltsamen, nicht-euklidischen Welt gefangen... Sammle so viele Schätze "
  "wie du kannst, bevor dich die Monster fangen. Je mehr Schätze du hast, desto mehr Monster "
  "werden dich jagen bis du das Land verlässt. Die "
  "Orbs von Yendor sind der ultimative Schatz - sammle mindestens eine um zu gewinnen!" )

S("You can fight most monsters by moving into their location. "
  "The monster could also kill you by moving into your location, but the game "
  "automatically cancels all moves which result in that.\n\n",

  "Du kannst die meisten Monster bekämpfen, indem du dich an ihre Position begibst. "
  "Besagtes Monster könnte dich auch töten, indem es sich an deine Position begibst,  "
  "aber das Spiel lässt dies nicht zu.\n\n")

S("Usually, you move by touching somewhere on the map; you can also touch one "
  "of the four buttons on the map corners to change this (to scroll the map "
  "or get information about map objects). You can also touch the "
  "numbers displayed to get their meanings.\n",
  "Normalerweise bewegst du dich durch Antippen der Karte, du kannst aber auch einen der "
  "vier Knöpfe in den Ecken antippen um dies zu ändern (um die Karte zu scrollen oder Infos "
  "über Objekte zu bekommen). Du kannst auch die Zahlen antippen um ihre Bedeutung zu erfahren.\n")

S("Move with mouse, num pad, qweadzxc, or hjklyubn. Wait by pressing 's' or '.'. Spin the world with arrows, PageUp/Down, and Home/Space. "
  "To save the game you need an Orb of Safety. Press 'v' for config, ESC for the quest status and menu.\n\n",
  "Bewege dich mit der Maus, dem Numpad, QWEADZXC, oder HJKLYUBN. Warte mit S oder '.'. Drehe die Welt mit den Pfeiltasten, PgUp/PgDn, und Pos1/Space. "
  "Um zu speichern, benötigst du einen Orb der Geborgenheit. Drücke V für Einstellungen, ESC für den Quest-Status und das Menü.\n\n")

S("See more on the website: ", "Mehr auf der Website: ")

S("special thanks to the following people for their bug reports, feature requests, porting, and other help:\n\n%1\n\n",
  "Besonderer Dank gebührt diesen Leuten für ihre Bug Reports, Feature-Anfragen, Ports, und andere Hilfe:\n\n%1\n\n")

S("The total value of the treasure you have collected.\n\n"
  "Every world type contains a specific type of treasure, worth 1 $$$; "
  "your goal is to collect as much treasure as possible, but every treasure you find "
  "causes more enemies to hunt you in its native land.\n\n"
  "Orbs of Yendor are worth 50 $$$ each.\n\n",


  "Der Gesamtwert deiner Schätze.\n\n"
  "Jedes Land hat einen eigenen Schatztyp, der 1 $$$ wert ist. "
  "Dein Ziel ist soviel Schätze wie möglich zu sammeln, aber jeder Schatz    den du findest "
  "erzeugt mehr Feinde in seinem Herkunftsland.\n\n"
  "Orbs von Yendor sind 50 $$$ pro Stück wert.\n\n")

S("The higher the number, the smoother the animations in the game. "
  "If you find that animations are not smooth enough, you can try "
  "to change the options ",
  "Je höher die Zahl, desto flüssiger sind die Animationen. Sind sie nicht flüssig genug, "
  "versuche die Optionen zu ändern ")

S("(Menu button) and select the ASCII mode, which runs much faster. "
  "Depending on your device, turning the OpenGL mode on or off might "
  "make it faster, slower, or cause glitches.",
  "(Im Menü) Versuche den ASCII-Modus zu aktivieren - der läuft viel schneller! "
  "Je nach Gerät kann der OpenGL-Modus das Spiel beschleunigen, verlangsamen, oder Glitches hervorrufen.")

S("(in the MENU). You can reduce the sight range, this should make "
  "the animations smoother.",
  "(im Menü) kannst du die Sichtweite reduzieren, dies sollte die Animation flüssiger machen.")

S("(press v) and change the wall/monster mode to ASCII, or change "
  "the resolution.",
  "(drücke V) um den 'Wand/Monster'-Modus auf ASCII zu schalten, oder die  Auflösung zu ändern.")

S("In this mode you can draw your own player character and floors. "
  "Mostly for the development purposes, but you can have fun too.\n\n"
  "f - floor, p - player (repeat 'p' for layers)\n\n"
  "n - new shape, u - copy the 'player body' shape\n\n"
  "1-9 - rotational symmetries, 0 - toggle axial symmetry\n\n"
  "point with mouse and: a - add point, m - move nearest point, d - delete nearest point, c - nearest point again, b - add after nearest\n\n"
  "s - save in C++ format (but cannot be loaded yet without editing source)\n\n"
  "z - zoom, o - Poincaré model\n",

  "Hier kannst du deine eigenen Spielfiguren/Bodenplatten zeichnen. "
  "Primär zur Entwicklung, aber hab Spaß.\n\n"
  "f - Boden, p - Spieler (wiederholt für Schichten)\n\n"
  "n - neue Form, u - kopiere die Körperform des Spielers\n\n"
  "1-9 - Dreh-Symmetrie, 0 - Achsen-Symmetrie umschalten\n\n"
  "Maus darüber und: a - Punkt hinzufügen, m - Nächsten Punkt verschieben, d - Nächsten Punkt löschen, c - Nächsten Punkt kopieren, b - Nach Nächstem Punkt hinzufügen\n\n"
  "s - im C++-Format speichern (kannst du aber noch nicht laden, ohne Quellcode zu ändern)\n\n"
  "z - Zoom, o - Poincaré-Modell\n")

S("These huge monsters normally live below the sand, but your movements have "
  "disturbed them. They are too big to be slain with your "
  "weapons, but you can defeat them by making them unable to move. "
  "This also produces some Spice. They move two times slower than you.",

  "Diese riesigen Monster leben normalerweise unter dem Sand, aber deine Bewegungen haben sie "
  "geweckt. Sie sind zu groß, als dass du sie mit deinen Waffen erschlagen könntest. "
  "Du kannst sie besiegen, indem du dafür sorgst, dass sie sich nicht mehr bewegen können. "
  "Dies produziert auch etwas Spice. Sie bewegen sich halb so schnell wie du.")

S("The tentacles of Cthulhu are like sandworms, but longer. "
  "They also withdraw one cell at a time, instead of exploding instantly.",

  "Die Tentakel von Cthulhu sind wie Sandwürmer, aber länger. "
  "Anstatt zu explodieren ziehen sie sich zurück, eine Zelle nach der anderen.")

S("A huge plant growing in the Jungle. Each Ivy has many branches, "
  "and one branch grows per each of your moves. Branches grow in a clockwise "
  "order. The root itself is vulnerable.",
  "Eine riesige Pflanze, die im Dschungel wächst. Jeder Efeu hat viele Zweige, "
  "und jedes Mal, wenn du dich bewegst, wächst einer. Sie wachsen im Uhrzeigersinn. "
  "Die Wurzel selbst ist verwundbar.")

S("The Alchemists produce magical potions from pools of blue and red slime. You "
  "can go through these pools, but you cannot move from a blue pool to a red "
  "pool, or vice versa. Pools containing items count as colorless, and "
  "they change color to the PC's previous color when the item is picked up. "
  "Slime beasts also have to keep to their own color, "
  "but when they are killed, they explode, destroying items and changing "
  "the color of the slime and slime beasts around them.",
  "Die Alchemisten produzieren magische Tränke aus Lachen von blauem und rotem Schleim. "
  "Du kannst durch sie hindurchgehen, aber du kannst nicht von Blau zu Rot wechseln oder umgekehrt. "
  "Lachen mit Gegenständen darin sind farblos und bekommen die Farbe, auf der " // FIXME: find sysonym for "Lachen"
  "du zuletzt warst, wenn du den Gegenstand aufhebst. Schleimmonster müssen auch auf ihrer Farbe "
  "bleiben. Wenn sie sterben, explodieren sie, zerstören Items und "
  "ändern die Farbe von Schleim und Schleimmonstern um sie herum.")

S("These creatures are slow, but very powerful... more powerful than you. "
  "You need some more experience in demon fighting before you will be able to defeat them. "
  "Even then, you will be able to slay this one, but more powerful demons will come...\n\n"
  "Each 10 lesser demons you kill, you become powerful enough to kill all the greater "
  "demons on the screen, effectively turning them into lesser demons.",

  "Diese Kreaturen sind langsam, aber sehr mächtig... mächtiger als du. "
  "Du brauchst Erfahrung im Kampf gegen Dämonen, bevor du sie besiegen kannst. "
  "Trotzdem bist du in der Lage, diesen zu töten, aber es werden stärkere Dämonen kommen...\n\n"
  "Jedes Mal, wenn du 10 gewöhnliche Dämonen getötet hast, wirst du stark genug, um alle mächtigen Dämonen "
  "auf dem Bildschirm zu töten, indem du sie in gewöhnliche Dämonen verwandelst.")

S("These creatures are slow, but they often appear in large numbers.",
  "Diese Monster sind langsam aber sie erscheinen oft in großen Gruppen.")

S("A big monster from the Living Caves. A dead Troll will be reunited "
  "with the rocks, causing some walls to grow around its body.",
  "Ein großes Monster aus den Lebenden Höhlen. Ein toter Troll wird eins mit dem Gestein, "
  "was dazu führt, dass er von Wänden umgeben wird.")

S("Huge, impassable walls which separate various lands.",
  "Gigantische, undurchdringbare Wände, die die verschiedenen Länder voneinander trennen.")

S("This cave contains walls which are somehow living. After each turn, each cell "
  "counts the number of living wall and living floor cells around it, and if it is "
  "currently of a different type than the majority of cells around it, it switches. "
  "Items count as three floor cells, and dead Trolls count as five wall cells. "
  "Some foreign monsters also count as floor or wall cells.\n",
  "Diese Höhle enthält Wände, die auf irgendeine Art leben. Nach jedem Zug zählt jede Zelle "
  "die Zahl von lebenden Wänden und Böden um sich herum. Wenn sie von anderer Art als die Mehrzahl der umgebenden Zellen ist, wandelt sie sich um. "
  "Gegenstände zählen als drei Böden; tote Trolle zählen als fünf Wände. "
  "Manche fremde Monster zählen auch als Böden oder Wände.\n")

S("This forest is quite dry. Beware the bushfires!\n"
  "Trees catch fire on the next turn. The temperature of the grass cells "
  "rises once per turn for each fire nearby, and becomes fire itself "
  "when its temperature has risen 10 times.\n"
  "You can also cut down the trees. Big trees take two turns to cut down.",
  "Dieser Wald ist ziemlich trocken. Achtung - Waldbrände!\n"
  "Bäume fangen im nächsten Zug Feuer. Die Temperatur von Gras steigt jeden Zug für jedes Feuer in der Nähe, "
  "und wird selbst zu Feuer wenn dies 10-mal geschehen ist.\n"
  "Du kannst auch die Bäume fällen. Große Bäume zu fällen dauert zwei Züge.")

S("A big and quite intelligent monster living in the Icy Land.",
  "Ein großes und äußerst intelligentes Monster das im Eisigem Land lebt.")

S("A nasty predator from the Icy Land. Contrary to other monsters, "
  "it tracks its prey by their heat.",
  "Ein scheußlicher Jäger des Eisigen Landes. Anders als andere Monster findet er seine Beute durch deren Wärme.")

S("Rangers take care of the magic mirrors in the Land of Mirrors. "
  "They know that rogues like to break these mirrors... so "
  "they will attack you!",
  "Ranger beschützen die Zauberspiegel im Spiegelland. Sie wissen, dass Schurken wie du "
  "die Spiegel gerne zerbrechen - also greifen sie dich an!")

S("A nasty creature native to the Living Caves. They don't like you "
  "for some reason.",
  "Ein grässliches Geschöpf, das in den Lebenden Höhlen haust. Irgendwie können diese Kreaturen dich nicht leiden.")

S("A tribe of men native to the Desert. They have even tamed the huge Sandworms, who won't attack them.",
  "Ein Volk, das in der Wüste lebt. Sie haben es sogar geschafft, die Sandwürmer so zu zähmen, "
  "dass diese sie nicht angreifen.")

S("This giant ape thinks that you are an enemy.", "Dieser riesige Affe glaubt, dass du ein Feind bist.")

S("A magical being which copies your movements.", "Ein magisches Wesen, das deine Bewegungen kopiert.")

S("A magical being which copies your movements. "
  "You feel that it would be much more useful in an Euclidean space.",
  "Ein magisches Wesen, das deine Bewegungen kopiert.\n"
  "Du hast das Gefühl, es wäre in einer euklidischen Umgebung viel nützlicher.")

S("You can summon these friendly constructs with a magical process.",
  "Du kannst diese freundlichen Steinriesen mit einem Ritual beschwören.") // FIXME: correct?

S("A majestic bird, who is able to fly very fast.",
  "Ein majestätischer Vogel der sehr schnell fliegt.")

S("A monster who is able to live inside the living cave wall.",
  "Ein Monster, das innerhalb der lebenden Wände leben kann.")

S("A typical Graveyard monster.", "Ein typisches Friedhofsmonster.")

S("A typical monster from the Graveyard, who moves through walls.\n\n"
  "There are also wandering Ghosts. They will appear "
  "if you do not explore any new places for a long time (about 100 turns). "
  "They can appear anywhere in the game.",
  "Ein Monster das vom Friedhof stammt und sich durch Wände bewegen kann.\n\n"
  "Es gibt auch umherirrende Geister. Diese erscheinen, wenn du dich lange (um die 100 Züge) "
  "am selben Ort aufhältst. Sie können überall im Spiel auftauchen.")

S("Necromancers can raise ghosts and zombies from fresh graves.",
  "Totenbeschwörer können Geister und Zombies aus frischen Gräbern auferwecken.")

S("A creepy monster who follows you everywhere in the Graveyard.",
  "Ein gruseliges Monster das dir über den ganzen Friedhof folgt!")

S("People worshipping Cthulhu. They are very dangerous.",
  "Verehrer Cthulhus. Sie sind sehr gefährlich.")

S("People worshipping Cthulhu. This one is especially dangerous, "
  "as he is armed with a weapon which launches fire from afar.",
  "Verehrer Cthulhus. Dieser ist besonders gefährlich, er besitzt eine Waffe, die aus "
  "der Ferne Feuer schleudern kann.")

S("This dangerous predator has killed many people, and has been sent to Cocytus.",
  "Dieser gefürchtete Jäger hat schon viele das Leben gekostet und wurde nach Kokytos geschickt.")

S("This white dog is able to run all the time. It is the only creature "
  "able to survive and breed in the Land of Eternal Motion.",
  "Dieser weiße Hund kann unablässig rennen. Er ist die einzige Kreatur, die im "
  "Land des Endlosen Antriebs überleben und sich vermehren kann.")

S("Demons of Hell do not drown when they fall into the lake in Cocytus. "
  "They turn into demonic sharks, enveloped in a cloud of steam.",
  "Dämonen aus der Hölle ertrinken nicht, wenn sie in den See von Kokytos fallen. Stattdessen "
  "werden sie zu Dämonenhaien, eingehüllt in eine Wolke aus Dunst.")

S("These fairies would rather burn the forest, than let you get some Fern Flowers. "
  "The forest is infinite, after all...\n\n"
  "Fire Fairies transform into fires when they die.",
  "Diese Feen würden eher den ganzen Wald niederbrennen als dich Farnblüten sammeln zu lassen. "
  "Der Wald ist schließlich grenzenlos...\n\n"
  "Wenn Feuerfeen sterben, werden sie selbst zu Feuer.")

S("These warriors of the Forest wield exotic weapons called hedgehog blades. "
  "These blades protect them from a frontal attack, but they still can be 'stabbed' "
  "easily by moving from one place next to them to another.",
  "Diese Krieger des Waldes besitzen exotische Waffen, die Igelklingen. "
  "Diese schützen sie vor frontalen Angriffen - aber sie können dennoch "
  "'erstochen' werden indem man sich direkt neben ihnen von einer Zelle auf eine andere bewegt.")

S("This being radiates an aura of wisdom. "
  "It is made of a beautiful crystal, you would love to take it home. "
  "But how is it going to defend itself? Better not to think of it, "
  "thinking causes your brain to go hot...\n\n"
  "Crystal Sages melt at -30 °C, and they can rise the temperature around you from afar.",
  "Dieses Wesen strahlt eine Aura der Weisheit aus. Es besteht aus einem schönen Kristall, "
  "am liebsten würdest du es mit nach Hause nehmen... Nur, wie verteidigt es sich? Besser "
  "nicht daran denken... Denken lässt dein Gehirn heiß werden...\n\n"
  "Kristallweisen schmelzen bei -30 °C. Sie können die Temperatur um dich herum aus der Ferne ansteigen lassen.")

S("Cold white gems, found in the Icy Land.", "Kalte weiße Edelsteine aus dem Eisigen Land.")

S("An expensive metal from the Living Caves. For some reason "
  "gold prevents the living walls from growing close to it.",
  "Ein teures Metall aus den Lebenden Höhlen. Aus irgendeinem Grund verhindert Gold, dass lebende Wände in seiner Nähe entstehen.")

S("A rare and expensive substance found in the Desert. "
  "It is believed to extend life and raise special psychic powers.",
  "Eine seltene und teure Substanz aus der Wüste. Man sagt, sie verlängert das Leben und verleiht besondere, psychische Kräfte.")

S("A beautiful gem from the Jungle.", "Ein schöner Edelstein aus dem Dschungel.")

S("A wonderful beverage, apparently obtained by mixing red and blue slime. You definitely feel more "
  "healthy after drinking it, but you still fell that one hit of a monster is enough to kill you.",
  "Ein wunderbares Getränk, anscheinend entstanden aus der Mischung von blauem und rotem Schleim. "
  "Du fühlst dich definitiv gesünder nach seinem Genuss, aber trotzdem ahnst du, dass ein Schlag eines Monsters ausreichen würde, dich zu töten.")

S("A piece of a magic mirror, or a mirage cloud, that can be used for magical purposes. Only mirrors and clouds "
  "in the Land of Mirrors leave these.",
  "Ein Stück eines Zauberspiegels oder einer Illusionswolke, das für magische Zwecke verwendet werden kann. "
  "Ausschließlich Zauberspiegel und Illusionswolken im Land der Spiegel hinterlassen so etwas.")

S("These sinister totems contain valuable gems.",
  "Diese schaurigen Totems enthalten wertvolle Edelsteine.")

S("These star-shaped flowers native to Hell are a valuable alchemical component.",
  "Diese sternförmigen Blumen aus der Hölle sind eine wertvolle alchemistische Zutat.")

S("This statue is made of materials which cannot be found in your world.",
  "Diese Statue besteht aus Materialien, die in deiner Welt nicht existieren.")

S("One of few things that does not cause the floor in the Land of Eternal Motion to collapse. Obviously they are quite valuable.",
  "Eines der wenigen Dinge, die den Boden im Land des Endlosen Antriebs nicht einstürzen lassen. Sie sind offensichtlich sehr wertvoll.")

S("Cold blue gems, found in the Cocytus.", "Kalte, blaue Edelsteine aus dem Kokytos.")

S("These bright yellow gems can be found only by those who have mastered the Crossroads.",
  "Diese hellen, gelben Edelsteine können nur von denen gefunden werden, die die Kreuzungen gemeistert haben.")

S("That's all you need to unlock the Orb of Yendor! Well... as long as you are able to return to the Orb that this key unlocks...\n\n"
  "Each key unlocks only the Orb of Yendor which led you to it.",
  "Das ist alles, was du brauchst, um den Orb von Yendor zu öffnen! ...solange du wieder zurückfindest...\n"
  "Jeder Schlüssel entsperrt nur den Orb von Yendor, der dich zu ihm geführt hat.")

S("These orbs can be found in the Graveyard. You think that they were once powerful magical orbs, but by now, their "
  "power is long gone. No way to use them, you could as well simply drop them...\n\n",
  "Diese Orbs kannst du auf dem Friedhof finden. Du schätzt, sie waren einst mächtig, aber mittlerweile ist ihre Kraft verbraucht. "
  "Es gibt keinen Weg ihr Kraft wieder zu erwecken, du könntest die Orbs auch einfach dalassen...\n\n")

S("This wonderful Orb can only be collected by those who have truly mastered this hyperbolic universe, "
  "as you need the right key to unlock it. Luckily, your psychic abilities will let you know "
  "where the key is after you touch the Orb.",
  "Dieser wundervolle Orb kann nur von denen gesammelt werden, die dieses hyperbolische Universum komplett gemeistert haben, da du den richtigen Schlüssel benötigst, um ihre Macht zu entfesseln. "
  "Deine psychischen Fähigkeiten erlauben es dir, zu sehen, wo sich der Schlüssel befindet, nachdem du den Orb berührt hast.")

S("This orb can be used to invoke the lightning spell, which causes lightning bolts to shoot from you in all directions.",
  "Du kannst diesen Orb verwenden um einen Blitzzauber zu wirken, der Blitze in sämtliche Richtungen schießt.")

S("This orb can be used to invoke a flash spell, which destroys almost everything in radius of 2.",
  "Du kannst diesen Orb verwenden um einen Lichtzauber zu wirken, der fast alles zerstört, was in einem Radius von 2 um dich ist.")

S("This orb can be used to invoke a wall of ice. It also protects you from fires.",
  "Du kannst diesen Orb verwenden um einen Eiszauber zu wirken, der eine Wand aus Eis hervorruft. Des weiteren beschützt er dich auch vor Feuer.")

S("This orb can be used to move faster for some time.",
  "Du kannst diesen Orb verwenden um dich für einige Zeit schneller zu bewegen.")

S("This orb can be used to summon friendly golems. It is used instantly when you pick it up.",
  "Dieser Orb dient dazu verbündete Golems zu beschwören, er wird benutzt sobald du ihn aufhebst")

S("This orb can protect you from damage.", "Dieser Orb kann dich vor Schaden schützen.")

S("This orb lets you instantly move to another location on the map. Just click a location which "
  "is not next to you to teleport there. ",
  "Dieser Orb teleportiert dich an einen anderen Ort auf der Karte, klicke einfach einen Ort an der sich nicht neben dir befindet.")

S("This orb lets you instantly move to a safe faraway location. Knowing the nature of this strange world, you doubt "
  "that you will ever find the way back...\n\n"
  "Your game will be saved if you quit the game while the Orb of Safety is still powered.\n\n"
  "Technical note: as it is virtually impossible to return, this Orb recycles memory used for the world so far (even if you do not use it to save the game). ",
  "Du kannst diesen Orb verwenden um dich an einen weit entfernten, sicheren Ort zu bewegen. Aufgrund der Gegebenheiten dieser Welt bezweifelst du, dass du je zurückfindest...\n\n"
  "Dein Spiel wird gespeichert, wenn du es beendest während der Orb der Geborgenheit noch Kraft besitzt.\n\n"
  "(Technische Anmerkung: Da es wirklich unmöglich ist, zurückzukehren, lässt dieser Orb den Speicher, den die Welt bis jetzt braucht, neu durchlaufen - sogar wenn du sie nicht verwendest, um zu speichern.)")

S("This orb allows attacking Hedgehog Warriors directly, as well as stabbing other monsters.\n",
  "Dieser Orb erlaubt es dir Igelkrieger direkt anzugreifen, und andere Monster zu 'erstechen'.\n")

S("This flower brings fortune to the person who finds it.\n",
  "Diese Blume bringt seinem Finder Glück.\n")

S("Ice Walls melt after some time has passed.", "Eiswände schmelzen nach gewisser Zeit.")

S("A natural terrain feature of the Desert.", "Eine natürliche Terrain Form der Wüste.")

S("You can go inside the Magic Mirror, and produce some mirror images to help you.",
  "Du kannst den Zauberspiegel betreten, um Spiegelbilder zu erzeugen, die dir helfen.")

S("Tiny droplets of magical water. You see images of yourself inside them. "
  "Go inside the cloud, to make these images help you.",
  "Kleine Tropfen aus magischem Wasser, in denen du dich selbst sehen kannst. "
  "Betritt den Dampf, um diese Bilder real werden zu lassen.")

S("A device that attracts sandworms and other enemies. You need to activate it.",
  "Ein Gerät, das Sandwürmer und andere Feinde anzieht. Allerdings musst du es einschalten.")

S("A heap of wood that can be used to start a fire. Everything is already here, you just need to touch it to fire it.",
  "Ein Haufen Holz, den du verwenden kannst, um ein Feuer zu machen. Alles ist schon da, du musst es nur berühren um das Feuer zu entfachen.")

S("An ancient grave.", "Ein antikes Grab.")

S("A fresh grave. Necromancers like those.", "Ein frisches Grab. Totenbeschwörer mögen diese.")

S("A piece of architecture typical to R'Lyeh.", "Ein Stück R'Lyeh-typischer Architektur.")

S("An impassable lake in Cocytus.", "Ein undurchdringbarer See im Kokytos.")

S("You can walk on it... but beware.", "Du kannst darauf gehen... aber pass auf.")

S("It was a floor... until something walked on it.", "Das war einst Boden... Dann ist was darauf gegangen.")

S("This land is a quick gateway to other lands. It is very easy to find other lands "
  "from the Crossroads. Which means that you find monsters from most other lands here!\n\n"
  "As long as you have found enough treasure in their native lands, you can "
  "find magical items in the Crossroads. Mirror Land brings mirrors and clouds, "
  "and other land types bring magical orbs.\n\n"
  "A special treasure, Hyperstone, can be found on the Crossroads, but only "
  "after you have found 10 of every other treasure.",
  "Dieses Land ist gut um schnell andere Länder zu erreichen. Es ist sehr einfach, diese von hier aus zu finden. Das bedeutet, dass hier auch Monster aus den meisten anderen Ländern sein können!\n\n"
  "Solange du genug Schätze in den Ländern gefunden hast, erscheinen magische Gegenstände auf den Kreuzungen. Spiegel und Wolken stammen aus dem Spiegelland, Orbs aus anderen Länder.\n\n"
  "Ein besonderer Schatz, der Hyperstein, kann hier gefunden werden aber du musst erst 10 von allen anderen Schätzen haben.")

S("A hot land, full of sand dunes, mysterious Spice, and huge and dangerous sand worms.",
  "Ein heißes Land, voller Sanddünen, geheimnisvollem Spice, und riesigen sowie gefährlichen Sandwürmern.")

S("A very cold land, full of ice walls. Your mere presence will cause these ice walls to "
  "melt, even if you don't want it.",
  "Ein ziemlich kaltes Land, voller Eiswände. Deine Gegenwart allein wird sie allerdings zum Schmelzen bringen, ob du willst oder nicht.")

S("A land filled with huge ivy plants and dangerous animals.",
  "Ein Land voller Efeu und gefährlicher Tiere.")

S("A strange land which contains mirrors and mirages, protected by Mirror Rangers.",
  "Ein seltsames Land voller Zauberspiegel und Illusionswolken, die von den Rangern geschützt werden.")

S("All the monsters you kill are carried to this strange land, and buried. "
  "Careless Rogues are also carried here...",
  "Alle Monster, die du tötest, werden hier begraben. Genauso wie achtlose Schurken...")

S("An ancient sunken city which can be reached only when the stars are right.\n\n"
  "You can find Temples of Cthulhu in R'Lyeh once you collect five Statues of Cthulhu.",
  "Eine antike, versunkene Stadt, die du nur erreichen kannst, wenn die Sterne günstig stehen.\n\n"
  "Der Tempel von Cthulhu befindet sich in R'Lyeh, sobald du fünf Statuen von Cthulhu gesammelt hast kannst du ihn betreten.")

S("A land filled with demons and molten sulphur. Abandon all hope ye who enter here!",
  "Ein Land voller Dämonen und geschmolzenem Schwefel. Gib alle Hoffnung auf, wenn du eintrittst!")

S("This frozen lake is a hellish version of the Icy Land. Now, your body heat melts the floor, not the walls.",
  "Dieser gefrorene See ist wie eine höllische Version des Eisigen Landes. Hier schmilzt deine Körperwärme den Boden, nicht die Wände.")

S("A land where you cannot stop, because every piece of floor is extremely unstable. Only monsters who "
  "can run forever are able to survive there, and only phoenix feathers are so light that they do not disturb "
  "the floor.\n",
  "Ein Land, in dem du nicht stehen bleiben darfst, denn jedes Stück Boden ist extrem instabil. Nur Monster die ewig laufen können sind in der Lage hier zu überleben. "
  "Nur Phönixfedern sind leicht genug, den Boden nicht zu erschüttern.\n")

S("Affects looks and grammar", "Aussehen und Grammatik")

S("first joystick: movement threshold", "Joystick 1: Bewegungsgrenze")
S("first joystick: execute movement threshold", "Joystick 1: Ausgeführte Bewegungsgrenze")
S("second joystick: pan threshold", "Joystick 2: Scrollgrenze")
S("second joystick: panning speed", "Joystick 2: Scrollgeschwindigkeit")
S("%The1 is frozen!", "%Der1 %1 ist eingefroren!")
S("%The1 burns!", "%Der1 %1 brennt!")
S("message flash time", "Nachrichten-Zeit")

S("skin color", "Hautfarbe")
S("weapon color", "Waffenfarbe")
S("hair color", "Haarfarbe")
S("dress color", "Kleidungsfarbe")
S("Shift=random, Ctrl=mix", "Shift=Zufällig, Ctrl=Mischen")

S("Euclidean mode", "Euklidischer Modus")
S("Return to the hyperbolic world", "Zur hyperbolischen Welt zurückkehren")
S("Choose from the lands visited this game.", "Wähle aus den Ländern, die diese Sitzung besucht wurden.")
S("Scores and achievements are not", "Im euklidischem Modus werden");
S("saved in the Euclidean mode!", "Punkte und Achievements nicht gespeichert!");

// Android buttons (some are not translated because there are no good short words in Polish)
S("MOVE", "VOR")
S("BACK", "RÜCK")
S("DRAG", "ZIEH")
S("INFO", "INFO")
S("MENU", "MENÜ")
S("QUEST", "QUEST")
S("HELP", "HILFE")
S("NEW", "NEU")
S("PLAY", "START")
S("SHARE", "TEILE")
S("HyperRogue for Android", "HyperRogue für Android")
S("Date: %1 time: %2 s ", "Datum: %1 Zeit: %2 s ")
S("distance: %1\n", "Distanz: %1\n")
S("Cheats: ", "Cheats: ")
S("Score: ", "Punkte: ")
S("Kills: ", "Kills: ")
S("Retrieving scores from Google Leaderboards...", "Empfange Rekorde aus Google Leaderboards...")
S("Scores retrieved.", "Rekorde empfangen.")

S("Your total treasure has been recorded in the Google Leaderboards.", "Deine Gesamtschätze wurden in die Google Leaderboards aufgenommen.")
S("You have improved your total high score on Google. Congratulations!", "Du hast deinen Gesamtrekord auf Google verbessert! Gratulation!")
S("You have improved your '%1' high score on Google!", "Du hast deinen '%P1'-Rekord auf Google verbessert!")
S("This has been recorded in the Google Leaderboards.", "Dies wurde in die Google Leaderboards aufgenommen.")

// this text changed a bit:


S("Ever wondered how some boardgame would look on the hyperbolic plane? "
  "I wondered about Go, so I have created this feature. Now you can try yourself!\n"
  "Enter = pick up an item (and score), space = clear an item\n"
  "Other keys place orbs and terrain features of various kinds\n"
  "In the periodic editor, press 0-4 to switch walls in different ways\n",
  "Hast du dich je gewundert, wie ein Brettspiel auf einer hyperbolischen Ebene aussehen würde? "
  "Ich habe mich über Go gewundert und dieses Feature erstellt. Probiere es selbst!\n"
  "Enter = Gegenstand aufheben (und punkte), [LEER] = Gegenstand löschen\n"
  "Andere Tasten platzieren Orbs, Terrain und Anderes\n"
  "Im periodischen Editor kannst du 0-4 verwenden um die Wände zu verändern\n")

S("Periodic Editor", "Periodischer Editor")
// also translate this line:
// "In the periodic editor, press 0-4 to switch walls in different ways\n",
// "Im periodischen Editor kannst du 0-4 verwenden um die Wände zu verändern\n"

S("Collect 60 $$$ to access even more lands", "Sammle 60 $$$ um noch mehr Länder zu besuchen.")

// Emerald Mine

N("Emerald Mine", GEN_F, "Smaragdmine", "Smaragdminen", "in der Smaragdmine")
N("Pikeman", GEN_M, "Bergmann", "Bergmänner", "Bergmann")
N("Flail Guard", GEN_M, "Morgenstern-Wächter", "Morgenstern-Wächter", "Morgenstern-Wächter")
N("Miner", GEN_M, "Minenarbeiter", "Minenarbeiter", "Minenarbeiter")
N("Emerald", GEN_M, "Smaragd", "Smaragde", "Smaragd")

Orb("the Mind", "der Psyche")

S("Evil people are mining for emeralds in this living cave. "
  "It does not grow naturally, but it is dug out in a regular "
  "pattern, which is optimal according to the evil engineers.",
  "Böse Leute bauen Smaragde in dieser lebenden Höhle ab. "
  "Sie entsteht nicht natürlich, sondern wird in einem Muster ausgebaut "
  "das die bösen Arbeiter als optimal ansehen.")

S("Miners have special tools for dealing with the Living Cave. "
  "When they die, these tools activate, destroying the living cave "
  "around them.",
  "Minenarbeiter haben spezielle Werkzeuge für den Umgang mit der Lebenden Höhle. "
  "Sterben sie, aktivieren sich diese Werkzeuge, was die Höhle um sie herum einstürzen lässt.") // FIXME: is this correct?

S("When Pikemen move, they attack all cells which are now adjacent to them. "
  "Luckily, they can be killed in the same way.\n\n"
  "They never move if this would attack their friends.",
  "Bewegen sich Bergmänner, greifen sie alle Zellen um sie herum an. "
  "Glücklicherweise können sie genauso getötet werden.\n\n"
  "Sie bewegen sich nicht wenn sie so ihre Freunde angreifen würden.")

S("This guard of the Emerald Mine is wielding a huge flail. "
  "You cannot attack him directly, as the flail would still hit you then. "
  "Luckily, you have learned a trick: if you step away from him, "
  "he will hit himself with the flail!",

  "Dieser Wächter der Smaragdmine hat einen riesigen Morgenstern. "
  "Ihn direkt anzugreifen würde nichts bringen da der Morgenstern dich treffen würde. "
  "Glücklicherweise kennst du einen Trick: "
  "Wenn du dich von ihm entfernst, trifft er sich selbst!")

S("A precious green gem from the Emerald Mines.", "Ein wertvoller grüner Edelstein aus den Smaragdminen.")

S("%The1 pierces %the2!", "%Der1 durchbohrt %den2 %a2!")

S("Make him hit himself by walking away from him.",
  "Bringe ihn dazu sich selbst zu treffen, indem du dich von ihm entfernst.")

S("This orb allows you to instantly kill a non-adjacent enemy by clicking it. "
  "Each use drains 30 charges.",
  "Dieser Orb erlaubt es dir, einen nicht angrenzenden Feind augenblicklich zu töten, indem du auf ihn klickst. "
  "Jede Verwendung verbraucht 30 Ladungen.")

S("%The1 is immune to mental blasts!", "%Der1 ist immun gegen mentale Korruption!") // FIXME
S("You kill %the1 with a mental blast!", "Du tötest %den1 %a1 mit mentaler Korruption!")

// Vineyard

N("Vineyard", GEN_M, "Weingarten", "Weingärten", "im Weingarten")
N("Vine Beast", GEN_F, "Rebenbestie", "Rebenbestien", "Rebenbestie")
N("Vine Spirit", GEN_F, "Rebenseele", "Rebenseelen", "Rebenseele") // FIXME: Geist?
N("vine", GEN_F, "Rebe", "Reben", "Rebe")
N("partial fire", GEN_N, "partielles Feuer", "partielle Feuer", "partielle Feuer")
N("Wine", GEN_M, "Wein", "Weine", "Wein")

S("This cell is partially on fire.", "Diese Zelle brennt teilweise.")

S("The Vineyard is filled with vines. A very dense pattern of straight lines here...\n\n"
  "Vine Beasts and Vine Spirits change vine cells to grass, and vice versa.", // FIXME: @zeno: wrong order!
  "Der Weingarten ist voller Reben. Ein dichtes Gitter aus lauter Geraden...\n\n"
  "Rebenbestien und Rebenseelen verwandeln Zellen von Gras in Reben und umgekehrt.")

S("A vine is growing here... but only on a half of the cell. How is that even possible?!"
  "Most monsters cannot move from this cell to the cell containing the other half. "
  "Vine spirits can move only to the adjacent cells which are also adjacent to the "
  "other half.",
  "Hier wächst eine Rebe... aber nur auf der halben Zelle. Wie kann das sein?!"
  "Die meisten Monster können sich nicht von dieser Zelle aus auf die bewegen, die die andere Hälfte enthält. "
  "Rebenseelen können sich nur auf angrenzende Zellen bewegen, die auch der anderen Hälfte anliegen. ")

S("A beast made of vines!\n\n"
  "Vine Beasts turn into vines when they die.",
  "Eine Bestie aus Reben!\n\n"
  "Rebenbestien werden zu Reben wenn sie sterben.")

S("A spirit living in the vines!\n\n"
  "Vine Spirits destroy the vines when they die.",
  "Eine Seele die in den Reben lebt!\n\n"
  "Rebenseelen zerstören Reben, wenn sie sterben.")

S("Wine grown under hyperbolic sun would be extremely prized in your home location.",
  "Wein, der unter hyperbolischer Sonne wächst, würde in deiner Heimat ziemlich viel wert sein.")

S("This orb allows one to pass through all kinds of walls and chasms.",
  "Dieser Orb erlaubt es dir, alle Arten von Wänden und Abgründen zu passieren.")

S("You cannot attack through the Vine!",
  "Du kannst nicht durch die Reben hindurch angreifen!")

Orb("Aether", "des Äthers")

// Dead Caves

N("Dead Cave", GEN_F, "Tote Höhle", "Tote Höhlen", "in der Toten Höhle")
N("Dark Troll", GEN_M, "Dunkle Troll", "Dunkle Trolle", "Dunklen Troll")
N("Earth Elemental", GEN_N, "Erdelementar", "Erdelementare", "Erdelementar")
N("dead wall", GEN_F, "tote Wand", "tote Wände", "tote Wand")
N("dead floor", GEN_F, "toter Boden", "tote Böden", "toten Boden")
N("rubble", GEN_N, "Geröll", "Geröll", "Geröll")
N("Silver", GEN_N, "Silber", "Silber", "Silber")

S("A precious metal from the Dead Caves.", "Ein wertvolles Metall aus den toten Höhlen.")

S("A Troll without the power of Life.", "Ein Troll ohne die Kraft des Lebens.")

S("A rare unliving construct from the Dead Caves. "
  "It instantly destroys cave walls next to its path, and also leaves "
  "an impassable wall behind it. You suppose that this impassable wall helps it to "
  "escape from some threats. You hope you won't meet these threats...",

  "Ein seltenes untotes Geschöpf aus den Toten Höhlen. "
  "Es zerstört unmittelbar alle Höhlenwände vor und neben sich und hinterlässt "
  "wiederum undurchdringbare Wände. Du vermutest, dass diese Wände ihm helfen sollen "
  "irgendwelchen Gefahren zu entkommen. Hoffentlich wirst du nicht sehen, wovor es flieht...")

S("%The1 punches %the2!", "%Der1 schlägt %den2 %a2!")
S("%The1 is destroyed by the forces of Life!", "Die Kräfte des Lebens zerstören %den1 %a1!")
S("Somehow, this cave has not received the spark of Life yet.",
  "Diese Höhle wurde noch nicht vom Funken des Lebens berührt.")

// Hive
N("Hive", GEN_N, "Nest", "Nest", "im Nest")
N("Red Hyperbug", GEN_M, "Roter Hyperkäfer", "Rote Hyperkäfer", "Roten Hyperkäfer")
N("Green Hyperbug", GEN_M, "Grüner Hyperkäfer", "Grüne Hyperkäfer", "Grünen Hyperkäfer")
N("Blue Hyperbug", GEN_M, "Blauer Hyperkäfer", "Blaue Hyperkäfer", "Blauen Hyperkäfer")
N("Royal Jelly", GEN_N, "Gelée Royale", "Gelée Royale", "Gelée Royale")
N("weird rock", GEN_M, "Seltsamer Stein", "Seltsame Steine", "Seltsamen Stein")

Orb("Invisibility", "der Transparenz")

S("A weirdly colored rock. Hyperentomologists claim that the "
  "Hyperbug armies use these rocks to navigate back home after a victorious battle.",
  "Ein seltsam gefärbter Stein. Hyperentomologen behaupten, die Hyperkäfer-Armeen "
  "verwenden sie, um nach einer siegreichen Schlacht nach Hause zu finden.")

S("%The1 fights with %the2!", "%Der1 %1 bekämpft %den2 %a2!")

S("The Hive is filled with Hyperbugs. They are huge insects which look a bit like "
  "ants, a bit like bees, and a bit like roaches. "
  "They live in circular nests, and an army of Hyperbugs will attack any intruder, "
  "including you and enemy Hyperbugs. Will you manage to get to the "
  "heart of such a nest, and get the precious Royal Jelly?",
  "Das Nest ist voller Hyperkäfer. Riesige Insekten, die ein bisschen wie Ameisen, "
  "Bienen oder Kakerlaken aussehen. Sie leben in kreisförmigen Nestern, und eine Armee "
  "von ihnen greift sämtliche Eindringlinge an - auch dich und feindliche Hyperkäfer. "
  "Schaffst du es zum Zentrum eines Nests, um das wertvolle Gelée Royale zu ergattern?")

S("This is what Hyperbug Queens eat. Very tasty and healthy.",
  "Dieses Gelee wird von Hyperkäfer-Königinnen gegessen. Sehr schmackhaft und gesund.")

S("When you have this Orb, most monsters won't see you, unless "
  "you are standing still, attacking, or picking up items.",
  "Während du diesen Orb besitzt, sehen dich die meisten Monster nicht, "
  "außer du stehst still, greifst an, oder hebst etwas auf.")

Orb("Earth", "der Erde")

S("This orb lets you go through living walls. It also has powers in some of the other lands.",
  "Dieser Orb erlaubt es dir, dich durch lebende Wände zu bewegen und er besitzt auch einige Kräfte in anderen Ländern.")

// Land of Power

N("Land of Power", GEN_N, "Land der Macht", "Länder der Macht", "im Land der Macht")
N("Witch Apprentice", GEN_M, "Hexenlehrling", "Hexenlehrlinge", "Hexenlehrling")
N("Speed Witch", GEN_F, "Geschwindigkeitshexe", "Geschwindigkeitshexen", "Geschwindigkeitshexe")
N("Flash Witch", GEN_F, "Donnerhexe", "Donnerhexen", "Donnerhexe")
N("Fire Witch", GEN_F, "Feuerhexe", "Feuerhexen", "Feuerhexe")
N("Aether Witch", GEN_F, "Ätherhexe", "Ätherhexen", "Ätherhexe")
N("Winter Witch", GEN_F, "Frosthexe", "Frosthexen", "Frosthexe")
N("Evil Golem", GEN_M, "Böser Golem", "Böse Golems", "Bösen Golem")
N("Powerstone", GEN_M, "Machtstein", "Machtsteine", "Machtstein")
N("crystal cabinet", GEN_F, "Kristallvitrine", "Kristallvitrinen", "Kristallvitrine")

S("When you have this Orb, you will leave a trail of fire behind you.",
  "Mit diesem Orb hinterlässt du eine Spur aus Feuer.")

S("A Witch without any special powers. But watch out! She will "
  "pick up any basic Orbs on her path, and use their powers.",
  "Eine Hexe ohne besondere Kräfte. Aber pass auf! "
  "Sie wird alle Orbs in ihrer Nähe aufheben und verwenden.")

S("A Witch with a Speed spell. She moves twice as fast as you. Unless you "
  "have an Orb of Speed too, of course!",
  "Eine Geschwindigkeitshexe, sie bewegt sich doppelt so schnell wie du. "
  "Außer natürlich, du hast auch einen Orb der Geschwindigkeit!")

S("A Witch with a Fire spell. She will leave a trail of fire behind her.",
  "Eine Feuerhexe. Sie hinterlässt eine Spur aus Feuer.")

S("A Witch with a Winter spell. She is able to move through fire.",
  "Eine Frosthexe. Sie kann durch Feuer gehen.")

S("A Witch with an Aether spell. She is able to move through fire and walls.",
  "Eine Ätherhexe. Sie kann durch Feuer und Wände gehen.")

S("Somebody has summoned these evil constructs with a magical process.",
  "Jemand hat diese bösen Konstrukte mit einem magischen Ritual beschworen.")

S("The Land of Power is filled with everburning fire, magical Orbs, and guarded by "
  "witches and golems. There are basic orbs lying everywhere, and more prized ones "
  "are kept in crystal cabinets.\n\n"
  "Witches are allowed to use all the powers of the "
  "basic orbs against intruders. These powers never expire, but a Witch "
  "can use only one power at a time (not counting Orbs of Life).\n\n"
  "Witches and Golems don't pursue you into other Lands. Also, most Orb powers "
  "are drained when you leave the Land of Power.",
  "Das Land der Macht ist voll mit ewigen Flammen, magischen Orb sowie  Hexen und Golems die es bewachen. Überall liegen einfache Orbs herum, und wertvollere werden in Kristallvitrinen aufbewahrt.\n\n"
  "Hexen dürfen alle Orbkräfte gegen Angreifer einsetzen. Diese laufen nie aus, allerdings kann eine Hexe jederzeit nur einen Zauber nutzen. (mit Ausnahme der Orbs des Lebens)\n\n"
  "Hexen und Golems verfolgen dich nicht in andere Länder. Außerdem verlieren viele Zauber die Kraft sobald du das Land verlässt.")

S("Witches use these crystal cabinets to protect Powerstones, as well as the more "
  "expensive Orbs. They are partially protected from thieves: they are too strong "
  "to be smashed by conventional attacks, and if you try to steal the item "
  "using an Orb of Aether, your Aether power will be completely drained.",
  "Hexen verwenden diese Kristallvitrinen um Machtsteine, und wertvolle "
  "Orbs zu schützen. Sie sind zu stark um von normalen Angriffen "
  "zerschmettert zu werden und solltest du versuchen den Inhalt "
  "mit einem Orb des Äthers zu stehlen, wird seine ganze Kraft verbraucht.")

S("A Stone from the Land of Power. You are not sure what it is exactly, but "
  "as the Powerstones are kept in crystal cabinets, they are surely valuable.",
  "Ein Stein aus dem Land der Macht. Du bist dir nicht ganz sicher was er tut, "
  "aber da er in einer Kristallvitrine ist, ist er sicher wertvoll!")

Orb("Fire", "des Feuers")

// achievements:

// x "Head Witch", "Have 10 Orbs active at the same time."
// "Enemy Number One", "Have an army of 1000 hyperbugs pursue you."
// x "Lifebringer", "Brought Life into the Dead Caves."
// "Wall Gardener", "Make a living wall grow outside of a cavernous region."
// x "Master Swordsman", "Defeat a Hedgehog Warrior, a Pikeman, and a Flail Guard at the same time."
// x "Master of Melee", "Defeat five monsters in melee at the same time."

// for collection achievements:
// provide the required cases for descriptions:
// Spice, Royal Jelly, Silver, Powerstone, and Wine
// achievement names:
// Master of the Hive, Master of Power, Master of Vineyard, Master of Dead Caves, Master of the Mine
// "Hyperbug", "Hyperbug Warrior", "Hyperbug Queen",

// for the store description:

// (currently, five more lands are included!)

// lines forgotten previously

S("Your Aether power has expired! RUN!", "Deine Ätherkraft ist zu Ende! Renn!")

S("%The1 tricks %the2.", "%Der1 %1 überlistet %den2 %a2.")
S("You trick %the1.", "Du überlistest %den1 %a1.")

S("A Witch with a Flash spell. Very dangerous!\n\nLuckily, she never uses the spell if it "
  "would kill her friends. She could destroy an Evil Golem, though.",
  "Eine Donnerhexe. Sehr gefährlich!\n\n"
  "Glücklicherweise setzt sie den Zauber nicht ein, wenn dies ihre Freunde gefährden würde. Sie kann allerdings böse Golems zerstören.")

S("Your Aether powers are drained by %the1!", "%Der1 %1 saugt deine Ätherkraft auf!")
S("As you leave, your powers are drained!", "Deine Kraft verblasst, als du gehst.")
S("%The1 picks up %the2!", "%Die1 %1 hebt %den2 %a2 auf!") // currently only Witches, so only female form

S("You can right click any element to get more information about it.\n\n",
  "Du kannst auf alles rechtsklicken, um Informationen darüber zu erhalten.\n\n")

S("The Hyperbugs are fighting!", "Die Hyperkäfer kämpfen!")

S("","") N("",GEN_N,"","","")

S("Cheat-changed the display.", "Anzeige durch Cheats geändert.")
S("Dead floor, with some rubble.", "Toter Boden, mit etwas Geröll.")

// Camelot

N("Camelot", GEN_N, "Camelot", "Camelot", "in Camelot")
N("wall of Camelot", GEN_F, "Wand von Camelot", "Wände von Camelot", "Wand von Camelot")
N("moat of Camelot", GEN_M, "Graben von Camelot", "Gräben von Camelot", "Graben von Camelot")
N("Round Table", GEN_F, "Tafelrunde", "Tafelrunde", "Tafelrunde")
N("Knight", GEN_M, "Ritter", "Ritter", "Ritter")
N("Holy Grail", GEN_M, "Heiliger Gral", "Heilige Grale", "Heiligen Gral")

S("The Knights of the Round Table are the greatest warriors of these lands. "
  "They are not very inventive with names though, as they call each of their "
  "castles Camelot. "
  "You are probably worthy of joining them, but they will surely give you "
  "some quest to prove yourself...\n\n"
  "Each castle contains a single treasure, the Holy Grail, in the center. "
  "The radius of the Round Table is usually 28, but after you find a Holy Grail "
  "successfully, each new castle (and each Round Table) you find will be bigger.",

  "Die Ritter der Tafelrunde sind die größten Krieger dieses Landes. "
  "Sie sind nur nicht sehr einfallsreich was Namen angeht, "
  "alle ihre Schlösser heißen Camelot. "
  "Bevor du ihnen beitreten kannst, wirst du ihnen beweisen müssen dass du ihrer würdig bist.\n\n"
  "In der Mitte jedes Schlosses befindet sich ein einziger Schatz, der Heilige Gral. "
  "Der Radius einer Tafelrunde ist normalerweise 28, allerdings wächst dieser sowie das Schloss "
  "mit jedem Heiligem Gral den du sammelst.")

S("It would be impolite to land on the table!",
  "Es wäre unhöflich auf dem Tisch zu landen.")
S("You jump over the table!", "Du springst über den Tisch!")
S("That was not a challenge. Find a larger castle!",
  "Das war keine Herausforderung. Finde ein größeres Schloss!")
S("The Knights congratulate you on your success!",
  "Die Ritter gratulieren dir zu deinem Erfolg!")
S("The Knights laugh at your failure!",
  "Die Ritter lachen dich aus weil du versagt hast!")
S("The Knights stare at you!", "Die Ritter starren dich an...")
S("Come on, this is too easy... find a bigger castle!",
  "Komm schon, das ist viel zu einfach... suche ein größeres Schloss!")
S("The Knights wish you luck!", "Die Ritter wünschen dir Glück!")

S("Congratulations! You have found the Holy Grail!",
  "Gratulation! Du hast den Heiligen Gral gefunden!")

S("\"I would like to congratulate you again!\"", "\"Ich möchte dir erneut gratulieren!\"")
S("\"Find the Holy Grail to become one of us!\"", "\"Finde den Heiligen Gral um einer von uns zu werden!\"")
S("\"The Holy Grail is in the center of the Round Table.\"", "\"Der Heilige Gral ist im Zentrum der Tafelrunde.\"")
S("\"I enjoy watching the hyperbug battles.\"", "\"Ich mag es, den Hyperkäfern beim Kämpfen zuzusehen.\"")
S("\"Have you visited a temple in R'Lyeh?\"", "\"Warst du schon in einem der Tempel in R'Lyeh?\"")
S("\"Nice castle, eh?\"", "\"Nettes Schloss, nicht?\"")

// Temple

N("Temple of Cthulhu", GEN_M, "Cthulhus Tempel", "Cthulhus Tempel", "in Cthulhus Tempel")
N("big statue of Cthulhu", GEN_F, "große Cthulhu Statue", "große Cthulhu Statuen", "große Cthulhu Statue") // FIXME: 3/=4
N("Grimoire", GEN_N, "Grimoire", "Grimoires", "Grimoire")
N("Cult Leader", GEN_M, "Anführer des Kultes", "Anführer des Kultes", " Anführer des Kultes")

S("The temple of Cthulhu consists of many concentric circles of columns. "
  "You will surely encounter many Cultists there, who believe that a pilgrimage "
  "to the inner circles will bring them closer to Cthulhu himself, and Grimoires "
  "which surely contain many interesting secrets.\n\n"
  "The circles in the temple of Cthulhu are actually horocycles. They are "
  "infinite, and there is an infinite number of them.",

  "Der Tempel von Cthulhu. Er besteht aus mehreren konzentrischen Kreisen mit Säulen. "
  "Du wirst sicherlich einige Anhänger Cthulhus hier finden. Diese glauben, eine Reise in die "
  "inneren Kreise bringt lässt sie mächtige Grimoires finden und bringt "
  "sie näher an Cthulhu.\n\n"
  "Die Kreise hier sind eigentlich Horozyklen. Unendlich groß und unendlich viele davon.")

S("The Grimoires contain many secrets of the Great Old Ones. "
  "Each new inner circle in the Temple of Cthulhu contains new Grimoires, with new secrets. "
  "You hope to read them when you return home, and to learn many things. "
  "The knowledge is valuable to you, but it is rather pointless to try to get "
  "several copies of the same Grimoire...",
  "Die Grimoires enthalten viele Geheimnisse der Weißen Alten. "
  "Jeder neue innere Kreis des Tempels von Cthulhu enthält neue Grimoires, mit mehr Geheimnissen. "
  "Das Wissen ist dir sehr kostbar, aber es wäre natürlich sinnlos, mehrmals dasselbe Grimoire aufzuheben...")

S("These statues of Cthulhu are too large to carry, and they don't look too "
  "valuable anyway. Most monsters will never go through them... they probably have "
  "their reasons. But you can go! When you move into the cell containing "
  "a statue, you push the statue to the cell you left.\n",

  "Diese Cthulhu Statuen sind zu groß um sie zu tragen und sehen sowieso nicht wertvoll aus. "
  "Die meisten Monster gehen nie an ihnen vorbei, dafür haben sie schon ihre Gründe. "
  "Du aber schon! Wenn du in die Zelle gehst, in der eine steht, schiebst du sie an deinen Ursprungsort.")

S("These Cultists can push the statues, just like you.",
  "Diese Anhänger können die Statuen schieben, genau wie du.")

S("You already have this Grimoire! Seek new tomes in the inner circles.",
  "Du hast dieses Grimoire schon! Suche neue in den inneren Kreisen.")

S("You push %the1 behind you!", "Du schiebst %den1 %a1 hinter dich.")

// More texts

S("Your total kills", "Deine Gesamtkills")

S("In most lands, more treasures are generated with each enemy native to this land you kill. "
  "Moreover, 100 kills is a requirement to enter the Graveyard and the Hive.\n\n"
  "Friendly creatures and parts of monsters (such as the Ivy) do appear in the list, "
  "but are not counted in the total kill count.",

  "In den meisten Ländern werden mehr Schätze generiert, je mehr Feinde du darin tötest. "
  "Darüber hinaus benötigst du 100 Kills für den Friedhof und das Nest.\n\n"
  "Freundliche Kreaturen und Monsterteile (z.B. Efeu) werden zwar gezeigt, zählen aber nicht zur Gesamt-Punktzahl.")

S("There must be some temples of Cthulhu in R'Lyeh...",
  "Es muss doch ein paar Tempel von Cthulhu in R'Lyeh geben...")

S("You overheard Hedgehog Warriors talking about emeralds...",
  "Du überhörst Igelkrieger, die über Smaragde sprechen...")

S("You overhear miners talking about a castle...",
  "Du hörst Minenarbeiter über ein Schloss sprechen...")

S("A castle in the Crossroads...", "Ein Schloss in den Kreuzungen...")

/*
  S("You can find Temples of Cthulhu in R'Lyeh once you collect five Statues of Cthulhu.",
  "Du kannst Tempel von Cthulhu in R'Lyeh finden, sobald du fünf seiner Statuen besitzt.")
*/

S("You have to escape first!", "Du musst zuerst entkommen!");
S("There is not enough space!", "Zu wenig Platz!");

S("Customize character", "Character anpassen")
S("gender", "Geschlecht")

//

Orb("the Dragon", "des Drachen")

S("This Orb allows you to throw fire, just like the Fire Cultists.\n\n"
  "Each fire drains 5 charges. You are not allowed to throw fire into adjacent cells.",
  "Dieser Orb erlaubt es dir, Feuer zu werfen.\n\n"
  "Jedes Feuer verbraucht 5 Ladungen. Du darfst kein Feuer auf angrenzende Zellen werfen.")

S("You throw fire!", "Du wirfst Feuer!")

Orb("Trickery", "des Truges")

N("Illusion", GEN_F, "Illusion", "Illusionen", "Illusion")

S("This Orb allows you to create illusions of yourself. Illusions are targetted "
  "by most monsters, just like yourself, Thumpers, and your friends.\n\n"
  "Each illusion takes 5 charges to create, and one extra charge "
  "per turn. You can also click your illusion to take it away, restoring 4 charges.\n\n"
  "If you have both Orb of Teleport and Orb of Trickery, Illusion is cast "
  "first -- you can then teleport on your Illusion to switch places with it.",
  "Dieser Orb erlaubt es dir, Illusionen deiner selbst zu erschaffen. Diese werden "
  "von den meisten Monstern verfolgt.\n\n"
  "Jede Illusion benötigt 5 Ladungen zum Erschaffen, plus eine Ladung pro Zug. "
  "Du kannst deine Illusion anklicken um sie zu entfernen, wofür du 4 Ladungen bekommst.\n\n"
  "Besitzt du einen Orb der Teleportation und einen des Truges, wird Illusion bevorzugt "
  "du kannst dich dann auf deine Illusion teleportieren, um die Plätze zu tauschen.")

S("Illusions are targetted "
  "by most monsters, just like yourself, Thumpers, and your friends.",
  "Illusionen werden von den meisten Monstern verfolgt.")

S("You create an Illusion!", "Du erschaffst eine Illusion!")
S("You take the Illusion away.", "Du entfernst die Illusion.")

S("You cannot target that far away!", "Zu weit weg!")
S("You cannot target that close!", "Zu nah!")
S("Cannot teleport on a monster!", "Du kannst nicht auf Monster teleportieren!")
S("Cannot teleport on an item!", "Du kannst dich nicht auf Gegenstände teleportieren!")
S("Cannot teleport here!", "Du kannst dich hierhin nicht teleportieren!")
S("Cannot cast illusion on an item!", "Du kannst Illusion nicht auf Gegenständen erschaffen!")
S("Cannot cast illusion here!", "Du kannst hier keine Illusion erschaffen!")
S("Cannot cast illusion on a monster!", "Du kannst Illusionen nicht auf Monstern erschaffen!")
S("Cannot throw fire there!", "Du kannst dort kein Feuer hinwerfen!")

// teleport -> target
// You cannot target that close!

S("or ESC to see how it ended", "oder ESC um zu sehen, wie alles endete")
S("high contrast", "Hoher Kontrast")
S("draw the heptagons darker", "Heptagone verdunkeln");
S("targetting ranged Orbs Shift+click only", "Zielen mit Distanzorbs per Shift-Klick")
S("Shift+F, Shift+O, Shift+T, Shift+L, Shift+U, etc.",
  "Shift+F, Shift+O, Shift+T, Shift+L, Shift+U, etc.")
S("also hold Alt during the game to toggle high contrast",
  "Du kannst auch ALT im Spiel halten, um hohen Kontrast umzuschalten")

// Crossroads II

N("Crossroads II", GEN_N, "II. Kreuzungen", "II. Kreuzungen", "auf den II. Kreuzungen")

S("An alternate layout of the Crossroads. It is more dense and more regular, "
  "although you won't find the castle of Camelot here.",

  "Ein alternatives Layout der Kreuzungen. Es ist beständiger und dichter, aber du findest Camelot hier nicht.")

// Caribbean

N("Caribbean", GEN_F, "Karibik", "Karibiken", "in der Karibik")

N("Pirate", GEN_M, "Pirat", "Piraten", "Pirat")
N("Shark", GEN_M, "Hai", "Haie", "Hai")
N("Parrot", GEN_F, "Papagei", "Papageien", "Papagei")
N("Pirate Treasure", GEN_M, "Piratenschatz", "Piratenschätze", "Piratenschatz")
N("Compass", GEN_M, "Kompass", "Kompasse", "Kompass")

N("sea", GEN_M, "See", "Seen", "See")
N("boat", GEN_N, "Boot", "Boote", "Boot")
N("island", GEN_F, "Insel", "Inseln", "Insel")
N("tree", GEN_M, "Baum", "Bäume", "Baum")

Orb("Time", "der Zeit")

S("This dangerous sea contains nasty sharks and pirates. ",
  "Dieser gefährliche Ozean enthält fiese Haie und Piraten.")

S("The islands of Caribbean are infinite and circular, and "
  "the pirates probably have hidden their treasures somewhere far from the coast.",
  "Die Inseln der Karibik sind unzählig und kreisförmig, die Piraten haben "
  "ihre Schätze sicher fernab der Küste versteckt.")

S("Hyperbolic pirates do not need huge ships, since so many lands to conquest "
  "are so close. These small boats are enough for them.\n\n"
  "Boats allow you to go through water. If you are in a boat, you can move into "
  "a water cell (and the boat will come with you).",

  "Hyperbolische Piraten brauchen keine riesigen Schiffe, da viele Länder zum "
  "Erobern so dicht zusammen sind. Diese kleinen Boote reichen ihnen.\n\n"
  "Boote lassen dich durch Wasser bewegen. Bist du in einem, kannst du "
  "dich auf Wasserzellen bewegen.")

S("The forests of Caribbean are too dense to be traversed by humans, "
  "and they are hard to burn. Many colorful parrots can be found there.",
  "Die karibischen Wälder sind zu dicht um von Menschen durchquert zu werden, "
  "und brennen nur schwerlich. Es gibt hier aber viele, farbenfrohe Papageien.")

S("Ye wonder where did th' Pirates find all these riches...",
  "Du fragst dich, woher die Piraten all diese Schätze haben...")

S("The hyperbolic pirates have no use for treasure maps. However, they have found "
  "out that a compass points to the center of the island. So they just go as "
  "far towards the center as they can, and hide their treasure there.",

  "Die hyperbolischen Piraten haben für Schatzkarten keinen Gebrauch. "
  "Jedoch haben sie erfahren, dass ein Kompass in die Mitte einer Insel zeigt. "
  "Also gehen sie so weit dort hin, wie sie können, und verstecken dort ihre Schätze.")

S("Just a nasty shark.", "Ist bloß ein fieser Hai.")

S("Parrots feel safe in the forests of Caribbean, so they "
  "never leave them. But they will help the Pirates by attacking the intruders.",

  "Papageien fühlen sich sicher in den karibischen Wäldern, daher verlassen sie diese nie. "
  "Allerdings helfen sie den Piraten beim Angreifen der Eindringlinge.")

S("Just a typical hyperbolic pirate.", "Ist bloß ein typischer, hyperbolischer Pirat.")

S("Normally, the power of most Orbs slowly fades away, even when "
  "you are not actively using them. This Orb prevents this.\n\n"

  "When you have the Orb of Time, Orbs which are not active won't lose their power. "
  "Orbs are considered active if they have a continuous power which has actually "
  "affected something in the last turn.\n\n"

  "Orbs of Shielding remain active after being activated (even if you are no longer "
  "attacked), and Orbs of Time have a bigger cap inside their native Caribbean than "
  "outside.",

  "Normalerweise schwindet die Kraft der meisten Orbs, sogar wenn du sie nicht einsetzt. "
  "Der Orb der Zeit verhindert dies.\n\n"

  "Besitzt du einen, verlieren inaktive Orbs keine Kraft. "
  "Orbs zählen als aktiv, wenn sie eine andauernde Kraft haben, die letzten Zug "
  "etwas beeinflusst hat.\n\n"

  "Orbs der Abschirmung bleiben nach Aktivierung aktiv "
  "und Orbs der Zeit halten in der Karibik länger als an anderen Orten.")

// Achievements:

// Parrot : Find and collect Pirate Treasure.
// Caribbean Shark : Collect 10 Pirate Treasures.
// Pirate : Collect 25 Pirate Treasures.
// Master of Caribbean : Collect 50 Pirate Treasures.

// Red Rock Valley

N("Red Rock Valley", GEN_N, "Rotfelsental", "Rotfelsentäler", "im Rotfelsental")

N("Rock Snake", GEN_F, "Felsschlange", "Felsschlangen", "Felsschlange")
N("Rock Snake Tail", GEN_M, "Felsschlangenschweif", "Felsschlangenschweifs", "Felsschlangenschweif")
N("Red Troll", GEN_M, "Roter Troll", "Rote Trolle", "Roten Troll")
N("Red Gem", GEN_M, "Roter Stein", "Rote Steine", "Roten Stein")

N("rock I", GEN_M, "Fels I", "Felsen I", "Fels I")
N("rock II", GEN_M, "Fels II", "Felsen II", "Fels II")
N("rock III", GEN_M, "Fels III", "Felsen III", "Fels III")

Orb("Space", "des Raumes")

S("Not enough power for telekinesis!", "Nicht genügend Kraft für Telekinese!")

S("This land contains high rock formations. Most of the valley is at level 0, "
  "while items are found at level 3. It is impossible to gain two or more levels, "
  "or to lose three levels, in a single move, (attacks are possible at any "
  "difference, though). Kill Red Trolls and Rock Snakes to make a cell higher.",

  "Dieses Land enthält hohe Felsformationen. Der Großteil des Tals ist auf Ebene 0, "
  "aber die meisten Gegenstände finden sich auf Ebene 3 (III). "
  "Es ist unmöglich mehr als eine Ebene aufzusteigen sowie alle 3 in einem Zug zu verlieren. "
  "Angriffe sind auf jeder Höhe möglich. Töte Rote Trolle und Felsschlangen, um eine "
  "Zelle zu erhöhen.")

S("A kind of Troll native to the Red Rock Valley.",
  "Eine spezielle Trollgattung, die im Rotfelsental lebt.")

S("Rock snakes are similar to Sandworms, but they move each turn. However, they "
  "only move on the hexagonal cells. They are also somewhat longer than the Sandworms.",

  "Felsschlangen sind Sandwürmern ähnlich, allerdings bewegen sie sich jeden Zug. "
  "Dafür meiden sie allerdings heptagonale Zellen. Sie sind auch länger als Sandwürmer.")

S("A gem from the Red Rock Valley.", "Ein Edelstein aus dem Rotfelsental.")

S("This Orb is able to bring faraway items to your location, even if there are "
  "monsters or barriers on the way. The cost of "
  "bringing an item (in charges) equals the square of its distance to you. Contrary "
  "to some other Orbs, usage is not allowed if you have not enough power left.",

  "Dieser Orb kann weit entfernte Gegenstände zu dir bringen, auch wenn Monster oder Barrieren im Weg sind. "
  "Die Kosten dafür ist die Distanz des Gegenstands zu dir zum Quadrat. "
  "Anders als ein paar andere Orbs kannst du diesen nicht benutzen, wenn er nicht genug Kraft hat.")

// Climber : Find and collect a Red Gem.
// Red Troll : Collect 10 Red Gems.
// Rock Snake : Collect 25 Red Gems.
// Master of Red Rock : Collect 50 Red Gems.

// missing sentences

S("%The1 drowns!", "%Der1 %1 ertrinkt!");
S("%The1 falls!", "%Der1 %1 fällt!");

// these were missing from the translation for some reason

S("Hell has these lakes everywhere... They are shaped like evil stars, and filled with burning sulphur.",
  "Diese Seen sind überall in der Hölle... Sie sehen aus wie böse Sterne, und sind voll mit brennendem Schwefel.")

// Hardcore Mode

S("hardcore mode", "Hardcore Modus");

S("One wrong move and it is game over!", "Eine falsche Bewegung kostet dich den Kopf!");
S("Not so hardcore?", "Doch nicht so hardcore?");

// Shoot'em up Mode

S("shoot'em up mode", "Ballermodus");
S("Welcome to the Shoot'em Up mode!", "Willkommen im Ballermodus!");
S("F/;/Space/Enter/KP5 = fire, WASD/IJKL/Numpad = move", "F/[;]/[LEER]/[ENTER]/[Numpad 5] = schießen, WASD/IJKL/[Numpad] = bewegen");

N("Rogue", GEN_M, "Schurke", "Schurken", "Schurken")
N("Knife", GEN_N, "Messer", "Messer", "Messer")
N("Flail", GEN_M, "Morgenstern", "Morgensterne", "Morgenstern")
N("Fireball", GEN_M, "Feuerball", "Feuerbälle", "Feuerball")
N("Tongue", GEN_F, "Zunge", "Zungen", "Zunge")

S("In the Shoot'em Up mode, you are armed with thrown Knives.",
  "Im Ballermodus bist du mit Wurfmessern bewaffnet.")
S("A simple, but effective, missile, used by rogues.",
  "Eine einfache, aber effektive, Wurfwaffe. Schurken verwenden sie.")
S("This attack is likely to hit the attacker.",
  "Dieser Angriff trifft wahrscheinlich den Angreifer.")
S("This magical missile burns whatever it hits.", "Dieses magische Geschoss verbrennt alles, was es trifft.")
S("Some monsters have long tongues, which allow them to attack enemies in nearby cells.",
  "Manche Monster haben lange Zungen, mit denen sie Feinde in nahen Zellen angreifen können.")

// modes for the local highscores

S(", m - mode: normal", ", m - Modus: Normal")
S(", m - mode: hardcore only", ", m - Modus: Hardcore")
S(", m - mode: shoot'em up", "m - Modus: Ballern")

// update description for Steam:

// (Shoot'em Up mode and two more lands than in the free version, and more are planned!)

// missing lines:

S("You would get hurt!", "Du würdest dir wehtun!")
S("PARTIAL", "TEILWEISE")

S("Cannot drop %the1 here!", "Du kannst %den1 %a1 hier nicht ablegen!");

// Euclidean scores
S(" (E:%1)", " (E:%1)");

S("You cannot attack Rock Snakes directly!", "Du kannst Felsschlangen nicht direkt angreifen!");

S("\"I am lost...\"", "\"Ich bin verloren...\"");

S("You are killed by %the1!", "%Der1 %1 hat dich getötet!")

// new menu for Version 7.1

S("(v) menu", "Menü - v")
S("return to the game", "zurück zum Spiel")
S("or 'v' to see the main menu", "oder v um das Menü einzublenden")

S("HyperRogue %1", "HyperRogue %1")
S("basic configuration", "Einstellungen")
S("advanced configuration", "Erweiterte Einstellungen")
S("local highscores", "Lokale Highscores")
S("help", "Hilfe")
S("restart game", "Neustart")
S("special game modes", "Spielmodi")
S("save the game", "Speichern")
S("quit the game", "Beenden")
S("review your quest", "Quest anzeigen")
S("review the scene", "Die Szene anzeigen")
S("game over screen", "Game Over Bildschirm")
S("continue game", "Weiter")
S("play the game!", "Spielen!")

// fixed descriptions for Shmup achievements

S("You have used less knives than ever before. Congratulations!",
  "Du hast weniger Messer als zuvor benutzt. Gratulation!")

S("You have improved both your real time and knife count. Congratulations!",
  "Du hast sowohl weniger Zeit sowie Messer als zuvor benutzt. Gratulation!")

S("%1 knives (%2)", "%1 Messer (%2)")

// temporary
S("No description yet." ,"Noch keine Beschreibung...")

// special case when no Spice is visible
S("The sandworm explodes!", "Der Sandwurm explodiert!")

// Ocean

// achievements:
// Reached Ocean: Find and collect an Amber.
// Albatross: Collect 10 Ambers.
// Amber Albatross: Collect 25 Ambers.
// Master of the Tides: Collect 50 Ambers.

N("Ocean", GEN_M, "Ozean", "Ozeane", "im Ozean")

S("You can collect some valuable Ambers on the coast, but beware the tides!\n\n"
  "You can also take one of the boats and venture into the Ocean, "
  "to find other coasts, dangerous whirlpools, and islands inhabited by Pirates.",

  "Du kannst wertvolle Bernsteine an der Küste sammeln, aber achte auf die Gezeiten!\n\n"
  "Du kannst ebenso eines der Boote nehmen und in den Ozean reisen "
  "um andere Küsten, gefährliche Strudel, und von Piraten besetzte Inseln zu finden.")

N("Albatross", GEN_M, "Albatros", "Albatrosse", "Albatros")

S("Those large seabirds attack you for some reason. At least they are not "
  "as fast as Eagles...",
  "Diese großen Seevögel greifen dich aus irgendeinem Grund an. "
  "Wenigstens sind sie langsamer als Adler...")

N("stranded boat", GEN_N, "gestrandetes Boot", "gestrandete Boote", "gestrandete Boot") // FIXME: 3/=4

S("This boat cannot go through the sand. But if you sit inside and "
  "wait for the tide, you will be able to use it to travel through the Ocean.",

  "Dieses Boot kann nicht durch den Sand schwimmen. Wartest du allerdings bis zur Flut, "
  "kannst du damit durch den Ozean reisen.")

N("Amber", GEN_M, "Bernstein", "Bernsteine", "Bernstein")

S("When the tide is away, beautiful ambers can be found on the hyperbolic beaches. "
  "Perhaps there used to be a forest here?" ,
  "Bei Ebbe können wunderschöne Bernsteine auf den hyperbolischen Stränden gefunden werden. Vielleicht war hier früher ein Wald...?")

Orb("Air", "der Luft")

S("This Orb allows you to blow your enemies away.\n\n"
  "Click a monster to blow it one cell away. It cannot be used against mimics, ghosts, sharks and other monsters restricted to a specific terrain, and multi-tile monsters.",
  "Dieser Orb erlaubt es dir, deine Feinde wegzuwehen.\n\n"
  "Klicke auf ein Monster, um es eine Zelle wegzuwehen. Der Orb ist wirkungslos gegenüber Mimiken, Geistern, Haien, und anderen Monstern, die nur auf bestimmten Terrain leben können. Monster, die größer als eine Zelle sind, sind auch immun.")


N("Sea Border", GEN_F, "Seegrenze", "Seegrenzen", "Seegrenze")

S("Border between seas.", "Eine Grenze zwischen Seen.")

// Whirlpool

// achievements:
// Escaped Whirlpool: Collect a Pearl, and escape the Whirlpool.
// Vortex Shark: Collect 10 Pearls.
// Vortex Pirate: Collect 25 Pearls.
// Master of the Whirlpool: Collect 50 Pearls.

N("Whirlpool", GEN_M, "Strudel", "Strudel", "im Strudel")

S("Many lost boats are spinning in this whirlpool. Some of them contain treasures "
  "and Pirates.\n\n"
  "Unmanned boats will go one cell clockwise in each turn. Sharks and manned boats "
  "are only allowed to go with the current, that is, towards the center, or clockwise.",

  "Viele verlorene Boote wirbeln in diesem Strudel... manche enthalten Schätze oder Piraten.\n\n"
  "Unbemannte Boote bewegen sich jeden Zug eine Zelle im Uhrzeigersinn. "
  "Haie und bemannte Boote dürfen nur mit der Strömung schwimmen (das heißt, zur Mitte oder im Uhrzeigersinn).")

N("Pearl", GEN_F, "Perle", "Perlen", "Perle")

S("You do not know exactly why, but there are valuable pearls on many boats "
  "in the whirlpool.",
  "Du weißt nicht genau warum, aber es gibt schöne Perlen auf vielen Booten im Strudel.")

Orb("Water", "des Wassers")

S("This Orb allows your boat to go against the current, "
  "and also to go into the land, creating water on the way.",
  "Dieser Orb erlaubt es dir, gegen die Strömung zu schwimmen. "
  "Du kannst damit auch durch Land schwimmen, wobei du Wasser kreierst).")

S("You cannot go against the current!", "Du kannst nicht gegen die Strömung schwimmen!")

// Minefield

// achievements:
// Reached Minefield: Collect a Bomberbird Egg.
// Minesweeper: Collect 10 Bomberbird Eggs.
// Bomberbird: Collect 25 Bomberbird Eggs.
// Master of the Minefield: Collect 50 Bomberbird Eggs.

N("Minefield", GEN_N, "Minenfeld", "Minenfelder", "im Minenfeld")
N("minefield", GEN_F, "Mine?", "Minen?", "Mine?")
N("cell without mine", GEN_F, "minenlose Zelle", "minenlose Zellen", "minenlose Zelle")

S("This minefield has been created by the Bomberbirds to protect their valuable eggs. "
  "Mines explode when they are stepped on, creating fire all around them "
  "(this fire never expires in the Minefield). If you don't step on a mine, you "
  "know the number of mines in cells around you. These numbers are marked with "
  "color codes on the cells you have visited.",
  "Dieses Minenfeld wurde von den Bombenvögeln erschaffen, um ihre wertvollen Eier zu schützen. "
  "Minen explodieren, wenn sie betreten werden, was Feuer um sie herum erzeugt (dieses erlischt im Minenfeld nicht). "
  "Wenn du auf keine Mine trittst, weißt du, wie viele Minen um dich herum sind. "
  "Diese Zahlen werden auf Zellen, die du besucht hast farblich angezeigt.")

N("Bomberbird", GEN_M, "Bombenvogel", "Bombenvögel", "Bombenvogel")

S("Dark red birds who have created the minefield.\n\n"
  "They create a mine on the spot where they are killed, provided "
  "that the terrain is suitable. Also note that mines are triggered "
  "by dead birds falling on them.",

  "Dunkelrote Vögel, die das Minenfeld erschufen.\n\n"
  "Wenn sie sterben erschaffen sie eine Mine, vorausgesetzt das Terrain passt). "
  "Tote, fallende Vögel lösen Minen auch aus!")

N("Tame Bomberbird", GEN_M, "Zahmer Bombenvogel", "Zahme Bombenvögel", "Zahmen Bombenvogel")

S("This bomberbird will follow you at some distance, and attack your enemies. "
  "You can kill it to place a mine.",

  "Dieser Bombenvogel folgt dir auf Distanz, und attackiert deine Feinde. "
  "Du kannst ihn töten, um eine Mine zu legen.")

N("Bomberbird Egg", GEN_N, "Bombenvogel Ei", "Bombenvogel Eier", "Bombenvogel Ei")

S("Bomberbird eggs are big and tasty, and thus valuable. "
  "They can hatch when left alone for some time (but this will never happen "
  "if you are watching).",

  "Bombenvogel Eier sind groß und schmackhaft, daher wertvoll. "
  "Sie können nach einiger Zeit schlüpfen (aber machen dies nie, wenn du zusiehst).")


Orb("Friendship", "der Freundschaft")

S("This Orb summons a friendly Bomberbird.",
  "Dieser Orb ruft einen verbündeten Bombenvogel herbei.")

S("Still confused? Read the FAQ on the HyperRogue website!\n\n",
  "Immer noch verwirrt? Lies das FAQ auf der HyperRogue-Webseite.\n\n")

S("Nowhere to blow %the1!", "Kein Platz um %den1 %a1 wegzuwehen!")
S("%The1 is immune to wind!", "%Der1 %1 ist immun gegen Wind!")
S("You blow %the1 away!", "Du wehst %den1 %a1 weg!")

S("WARNING: you are entering a minefield!", "ACHTUNG: Du betrittst ein Minenfeld!")
S("No mines next to you.", "Keine Minen um dich.")
S("A mine is next to you!", "1 Mine um dich!")
S("Two mines next to you!", "2 Minen um dich!")
S("Three mines next to you!", "3 Minen um dich!")
S("Four mines next to you!", "4 Minen um dich!")
S("Five mines next to you!", "5 Minen um dich!")
S("Six mines next to you!", "6 Minen um dich!")
S("Seven mines next to you!", "7 Minen um dich!")

S("You have to run away from the water!", "Du musst vor dem Wasser fliehen!")

// Version 7.2

N("Palace", GEN_M, "Palast", "Paläste", "im Palast")
N("palace wall", GEN_F, "Palastwand", "Palastwände", "Palastwand")

S("Apparently a princess is kept locked somewhere, but you won't ever find her in this hyperbolic palace. ",
  "Scheinbar ist irgendwo eine Prinzessin eingesperrt, "
  "Aber du wirst sie in diesem hyperbolischem Palast nie finden. ")

S("Apparently a prince is kept locked somewhere, but you won't ever find him in this hyperbolic palace. ",
  "Scheinbar ist irgendwo ein Prinz eingesperrt, aber du wirst ihn in diesem hyperbolischem Palast nie finden.")

S("So better just to concentrate on collecting treasure. "
  "Beware the traps, and the guards, who are hard to kill!",

  "Konzentriere dich besser darauf Schätze zu sammeln. "
  "Und achte auf Fallen, sowie Wachen die hart zu töten sind!")

N("trapdoor", GEN_F, "Falltür", "Falltüren", "Falltür")
S("This floor will fall after someone goes there. Go quickly!",
  "Der Boden wird zusammenbrechen sobald jemand über ihn geht. Beeile dich!")

N("closed gate", GEN_N, "Geschlossenes Tor", "Geschlossene Tore", "Geschlossene Tor") // FIXME: 3/=4
N("open gate", GEN_N, "Offenes Tor", "Offene Tor", "Offenes Tor")// FIXME: 3/=4
N("closing plate", GEN_M, "Schließmechanismus", "Schließmechanismen", "Schließsmechanismus")
N("opening plate", GEN_M, "Öffnungsmechanismus", "Öffnungsmechanismen", "Öffnungsmechanismus")

S("Green pressure plates open all gates in radius 3 around them. "
  "Similarly, red pressure plates close all gates in this radius.",

  "Grüne Druckplatten öffnen alle Tore in einem Radius von 3. "
  "Rote Druckplatten hingegen schließen die Tore.")

N("Hypersian Rug", GEN_M, "Hypersischer Teppich", "Hypersische Teppiche", "Hypersischer Teppich")
S("Nice, a hyperbolic rug! It will not fit very well on your flat Euclidean floor, but who cares?",
  "Ein hyperbolischer Teppich! Er wird nicht gut auf deinen flachen euklidischen Boden passen aber wen interessiert's?")

Orb("the Frog", "des Frosches")
S("This Orb lets you jump to a place which is two cell away from you, in a single turn. "
  "You can jump over water, chasms and fire, but not over walls.",
  "Dieser Orb lässt dich in einem Zug an einen Ort springen der 2 Zellen entfernt ist. "
  "Du kannst über Wasser, Feuer und Spalten springen aber nicht über Wände.")
S("Cannot jump through %the1!", "Du kannst nicht durch %den1 %a1 springen!")
S("You jump!", "Du springst!")

S("\n\nNote: when pushing %the1 off a heptagonal cell, you can control the pushing direction "
  "by clicking left or right half of the heptagon.",
  "\n\nHinweis: Wenn du %den1 %a1 von einer heptagonalen Zelle schiebst kannst du die Richtung bestimmen, "
  "indem du die linke oder rechte Seite des Heptagon anklickst.")

S(" With the keyboard, you can rotate the view for a similar effect (Page Up/Down).",
  " Du kannst die Ansicht mit der Tastatur rotieren; dies erzeugt einen ähnlichen Effekt (Bild Hoch/Runter).")

N("Palace Guard", GEN_F, "Palastwache", "Palastwachen", "Palastwache")

S("You have to hit Palace Guards several times to kill them. After each hit, they "
  "are pushed away and stunned for some time.",
  "Du musst Palastwachen mehrmals treffen um sie zu töten. "
  "Nach jedem Treffer werden sie zurückgestoßen und kurz betäubt.")

N("Fat Guard", GEN_F, "Dicke Wache", "Dicken Wachen", "Dicke Wache")

S("Fat guards are too heavy to be pushed away by your hits.",
  "Dicke Wachen sind zu schwer um zurück gestoßen zu werden.")

N("Skeleton", GEN_M, "Skelett", "Skelette", "Skelett")
S("Skeletons work similar to Palace Guards, but they won't die no matter how many "
  "times you hit them. Well, you have to be more creative...\n\n"
  "Skeletons attacked outside of their native land, Palace, are stunned for a longer time.",
  "Skelette ähneln den Palastwachen. Sie sterben zwar nicht egal wie oft du sie triffst, "
  "aber wenn du sie außerhalb des Palastes angreifst sind sie für lange Zeit betäubt \n\n"  )

N("Vizier", GEN_M, "Wesir", "Wesire", "Wesir")
S("Viziers are neither pushed away nor stunned. However, you attack them automatically when "
  "escaping from them.",
  "Wesire kannst du weder zurück stoßen noch betäuben. Jedoch greifst du sie automatisch an wenn du von ihnen fliehst.")

S("You stun %the1.", "Du betäubst %den1 %a1.")
S("The gate is closing right on you! RUN!", "Das Tor über dir schließt sich! Renne!")
S("%The1 is crushed!", "%der1 wurde zerquetscht!")
S("You hit %the1.", "Du triffst %den1 %a1.")
S("Hit him by walking away from him.", "Triff ihn indem du dich von ihm entfernst.")
S("Hmm, he has been training in the Emerald Mine. Interesting...", "Er  hat in der Smaragdmine trainiert. Interessant...")

// Reached the Palace: Find and collect a Hypersian Rug.
// Palace Guard: Collect 10 Hypersian Rugs.
// Vizier: Colect 25 Hypersian Rugs.
// Prince: Colect 50 Hypersian Rugs.

// Living Fjord

N("Living Fjord", GEN_M, "Lebender Fjord", "Lebende Fjorde", "Lebender Fjord")

S("A coastal area, from where you can get both to the inland worlds and to the Ocean. "
  "Each turn, each cell will become water or earth, based on the majority of cells around it. "
  "Contrary to the Living Caves, this process is not affected by most items and monsters, "
  "but elementals, dead Trolls, and cells outside of the Living Fjord have "
  "a very powerful effect.",
  "Ein Küstengebiet von dem aus du ins Inland sowie zum Ozean kommst. "
  "Jeden Zug wird aus jeder Zelle Wasser oder Erde basierend auf der Mehrzahl der Zellen um sie herum. "
  "Im Gegensatz zu den lebenden Höhlen wird dieser Prozess von den meisten Monstern und Items nicht beeinflusst, "
  "Elementare, tote Trolle und Zellen außerhalb des Fjords haben jedoch mächtige Effekte. " )

N("Fjord Troll", GEN_M, "Fjord Troll", "Fjord Trolle", "Fjord Troll")
S("Fjord Trolls leave a wall when they die, causing the living fjord to rise around it. "
  "Contrary to Rock Trolls, items around are not destroyed.",
  "Fjordtrolle hinterlassen eine Wand wenn sie sterben, was den lebenden Fjord dazu bringt um sie herum anzusteigen. "
  "Im Gegensatz zu Stein Trollen werden Items nicht zerstört.")

N("Viking", GEN_M, "Wikinger", "Wikinger", "Wikinger")
S("Mighty warriors from the Fjord, who can use boats.",
  "Mächtige Krieger die von den Fjorden stammen und Boote benutzen.")

N("Water Elemental", GEN_M, "Wasserelementar", "Wasserelementare", "Wasserelementar")
S("Wherever this powerful being goes, the living fjord "
  "sinks below water, non-magical boats are destroyed, and fires are extinguished.\n\n"
  "As a special case, you can attack the Water Elemental from the water, without drowning immediately.",
  "Wohin auch immer sich dieses Wesen bewegt sinkt der lebende Fjord. "
  "Dadurch werden nicht magische Boote zerstört und Feuer gelöscht.\n\n"
  "Die Besonderheit ist: du kannst den Wasserelementar vom Wasser aus angreifen ohne sofort zu ertrinken.")


N("Garnet", GEN_M, "Granat", "Granate", "Granat")
S("Vikings believe that garnets improve their strength.",
  "Wikinger glauben das Granat sie stärker macht.")

Orb("the Fish", "des Fisches")
S("This Orb lets you dive into the water. While diving, you are able to see and collect underwater treasures, "
  "while being invisible to monsters yourself. You are afraid of jumping into the water straight from a boat, so usually you won't do it.",
  "Dieser Orb erlaubt es dir zu tauchen. Während du tauchst kannst du versunkene Schätze sammeln, dabei bist du für Monster unsichtbar. "
  "Du hast Angst von einem Boot aus ins Meer zu springen daher tust du es meist nicht.")

S("%The1 is washed away!", "%der1 %a1 wurde weggeschwemmt!")
// %1 zosta%?1 zmyt%ya1!")
S("%The1 is extinguished!", "%der1 %a1 wurde gelöscht!")

// Reached the Living Fjord: Find and collect a Garnet.
// Viking: Collect 10 Garnets.
// Water Elemental: Colect 25 Garnets.
// Master of the Fjord: Colect 50 Garnets.

// implemented, not appears in the game yet

Orb("Discord", "des Zwiespalts")

S("Causes most monsters to attack other monsters, not only you and your friends.",
  "Dieser Orb bringt die meisten Monster dazu auch andere Monster und nicht nur dich anzugreifen.")

// Shmup Configuration

S("forward", "Vor")
S("backward", "Zurück")
S("turn left", "Nach links drehen")
S("turn right", "Nach rechts drehen")
S("move up", "Hoch bewegen")
S("move right", "Nach rechts bewegen")
S("move down", "Runter bewegen")
S("move left", "Nach links bewegen")
S("throw a knife", "Messer werfen")
S("face the pointer", "Zum Zeiger drehen")
S("throw at the pointer", "Zum Zeiger werfen")
S("drop Dead Orb", "Toten Orb fallen lassen")
S("center the map on me", "Karte selbstzentrieren")
S("activate Orb power", "Orb aktivieren")

S("pan up", "Hochschwenken")
S("pan right", "Nach rechts schwenken")
S("pan down", "Runterschwenken")
S("pan left", "Nach links schwenken")
S("rotate left", "Nach links rotieren")
S("rotate right", "Nach rechts rotieren")
S("home", "Home")

S("do nothing", "Tu nichts")
S("rotate view", "Ansicht rotieren")
S("panning X", "X schwenken")
S("panning Y", "Y schwenken")
S("player 1 X", "Spieler 1 X")
S("player 1 Y", "Spieler 1 Y")
S("player 1 go", "Spieler 1 los")
S("player 1 spin", "Spieler 1 drehen")
S("player 2 X", "Spieler 2 X")
S("player 2 Y", "Spieler 2 Y")
S("player 2 go", "Spieler 2 los")
S("player 2 spin", "Spieler 2 drehen")

S("Joystick %1, axis %2", "Joystick %1, Achse %2")
S("one player", "Ein Spieler")
S("two players", "Zwei Spieler")
S("configure player 1", "Spieler 1 konfigurieren")
S("configure player 2", "Spieler 2 konfigurieren")
S("configure panning", "Schwenken konfigurieren")
S("configure joystick axes", "Joystick Achsen konfigurieren")
S("continue playing", "Weiterspielen")
S("start playing in the shmup mode", "shmup Modus starten")
S("return to the turn-based mode", "Zurück zum turn based Modus")
S("save the configuration", "Konfiguration speichern")
S("press a key to unassign", "Drücke eine Taste zum entbinden")
S("press a key for '%1'", "Drücke eine Taste für '%1'")
S("unassign a key", "Taste entbinden")

// extra pattern modes

S("explore the Emerald Pattern", "Erkunde das Smaragdmuster")

// extra flavor/Knight lines

S("Kill a Vizier in the Palace to access Emerald Mine", "Töte einen Wisier im Palast um Zugang zu den Smaragdminen zu erhalten")
S("Collect 5 Emeralds to access Camelot", "Sammle 5 Smaragde um Zugang zu Camelot zu erhalten")
S("Some lands unlock at specific treasures or kills", "Manche Länder schaltest du durch bestimmte Anzahlen von Schätzen und Kills frei")

S("You will be fighting red rock snakes, too...", "Du wirst auch rote Felsschlangen bekämpfen...")

S("\"The Red Rock Valley is dangerous, but beautiful.\"",
  "\"Das Rotfelsental ist gefährlich aber wunderschön.\"")
S("\"Train in the Desert first!\"", "\"Trainier zuerst in der Wüste!\"")
S("\"I like collecting ambers at the beach.\"", "\"Ich sammle gerne Bernstein am Strand.\"")
S("\"Our Table seats %1 Knights!\"", "\"An unserer Tafel sitzen %1 Ritter!\"")
S("\"There are %1 floor tiles inside our Table!\"", "\"Es gibt %1 Bodenfliesen in unserer Tafel!\"")
S("\"By now, you should have your own formula, you know?\"", "\"Mittlerweile solltest du deine eigene Formel haben weißt du?\"")
S("\"Have you tried to take a boat and go into the Ocean? Try it!\"", "\"Hast du schon versucht mit einem Boot auf den Ozean zu fahren?\"")

//====================//
// NEW IN VERSION 7.3 //
//====================//

// new name for 'Ivy D'

N("Dead Ivy", GEN_M, "Toter Efeu", "Tote Efeue", "Toten Efeu")

// new messages for living/nonliving monsters

S("%The1 bites %the2!", "%Der1 %1 beißt %den2 %a2!")
S("%The1 attacks %the2!", "%Der1 %1 greift %den2 %a2 an!")
S("You destroy %the1 with a mental blast!", "Du zerstörst %den1 %a1 mit mentaler Korruption!")
S("The ivy kills %the1!", "Der Efeu tötet %den1 %a1!")
S("You destroy %the1.", "Du zerstörst %den1 %a1.")
S("%The1 kills %the2!", "%Der1 %1 tötet %den2 %a2!")
S("%The1 sinks!", "%Der1 %1 sinkt!");

S("Cannot jump on %the1!", "Du kannst nicht auf %den1 %a1!")

// renamed Fifty to Palace
S("explore the Palace Pattern (4 colors)", "Erkunde die Schlossstruktur (4 Farben)")
S("explore the Palace Pattern (8 colors)", "Erkunde die Schlossstruktur (8 Farben)")

// Map Editor
//============

S("map editor", "Map Editor")
S("You activate your terraforming powers!", "Du aktivierst deine terraforming Kräfte!")
S("Press F5 to clear the board.", "Drücke F5 um das Spielfeld zu leeren.")
S("Press F5 to restart the game normally.", "Drücke F5 um das Spiel neu zu starten.")
S("High quality shots not available on this platform", "HQ Screenshots sind auf diesem Gerät nicht verfügbar")
S("Saved the high quality shot to %1", "HQ Screenshot nach %1 gespeichert")
S("Map saved to %1", "Karte unter %1 gespeichert")
S("Map loaded from %1", "Karte von %1 geladen")
S("copying", "kopieren")
S("boundary", "Grenze")
S("clear monster", "Monster entfernen")
S("use at your own risk!", "Benutzen auf eigene Gefahr!")

// Note: in English, these have been arranged from longest to shortest.
// This gives a somewhat nice effect on the top left corner of the screen.
// You may want to aim for the same effect when translating

S("0-9 = radius (%1)", "0-9 = Radius (%1)")
S("b = boundary", "i = Grenze")
S("m = monsters", "m = Monster")
S("w = walls",    "w = Wände")
S("i = items",    "l = Items")
S("l = lands",    "c = Länder")
S("c = copy",     "b = Kopieren")

// And this is from shortest to longest (bottom left corner)
S("F1 = help",                "F1 = Hilfe")
S("F2 = save",                "F2 = Speichern")
S("F3 = load",                "F3 = Laden")
S("F5 = restart",             "F5 = Neustart")
S("F6 = HQ shot",             "F6 = HQ Screenshot")
S("F7 = player on/off",       "F7 = Spieler an/aus")
S("ESC = return to the game", "ESC = Zurück zum Spiel")

S("This mode allows you to edit the map.\n\n"
  "NOTE: Use at your own risk. Combinations which never "
  "appear in the real game may work in an undefined way "
  "(do not work, look strangely, give strange messages, or crash the game).\n\n"
  "To get the most of this editor, "
  "some knowledge of inner workings of HyperRogue is required. "
  "Each cell has four main fields: land type, wall type, monster type, item type. "
  "The same wall type (especially \"none\", \"sea\", or \"bonfire\") may look or "
  "work a bit differently, based on the land it is in. Sometimes an object may "
  "appear twice on the list due to subtle differences (for example, Demons could "
  "move next turn or not).\n\n"
  "Press w, i, l, or m to choose which aspect of cells to change, "
  "then just click on the cells and they will change. Press 'c' while "
  "hovering over a cell to copy that cell, this copies all information about it. "
  "When copying large areas or placing multi-tile monsters, it might be important where "
  "on the cell you are clicking.\n\n"
  "You can also press 0-9 to apply your changes to a greater radius. "
  "This also affects the copy/paste feature, allowing to copy a larger area.\n\n"
  "Press F2 to save the current map (and F3 to load it). If you try this after "
  "a long game of HyperRogue (without using Orbs of Safety), the filesize will "
  "be very large! "
  "Note however that large structures, such as "
  "Great Walls, large circles and horocycles, are destroyed by this.\n\n"
  "Press 'b' to mark cells as boundaries. Such cells, and cells beyond "
  "them, are not copied by the copy/paste feature, nor saved by the "
  "save feature.\n\n",

  "Dieser Modus erlaubt es dir die Map zu bearbeiten.\n\n"
  "WARNUNG: Benutzen auf eigene Gefahr! Kombinationen, die im Spiel selbst nicht vorkommen, "
  "können in skurrilen Situationen enden (funktioniert nicht, sieht komisch aus, "
  "erzeugt komische Meldungen, crasht das Spiel).\n\n"
  "Um das beste aus dem Editor rauszuholen ist etwas Wissen über Abläufe in HyperRogue nötig. "
  "Jede Zelle hat vier Hauptarten: Landtyp, Wandtyp, Monstertyp und Itemart. "
  "Ein und dieselbe Wand kann unterschiedlich aussehen und funktionieren, "
  "je nachdem auf welchem Land sie platziert ist. "
  "Manche Objekte können auch mehrmals Meldungen erzeugen. "
  "Drücke w, i, l oder m um zu bestimmen, welchen Aspekt der Zelle du änderst. "
  "Dann klick einfach auf die Zelle und sie wird sich ändern. "
  "Drücke 'c' während du dich über einer Zelle befindest um diese zu kopieren. "
  "Beim Kopieren von großen Gebieten und dem Platzieren von großen Monstern kann es sehr wichtig sein wo man klickt.\n\n"
  "Durch das Drücken von 0-9 werden die Änderungen in einem größerem Radius ausgeführt. "
  "Das Ganze beeinflusst auch das Kopieren und Einfügen, wodurch ein größerer Bereich kopiert werden kann.\n\n"
  "Drücke F2 um die Map zu speichern (und F3 um sie zu laden). "
  "Nach einer langen HyperRogue Sitzung (ohne den Orb der Geborgenheit zu nutzen) "
  "kann die Datei sehr groß sein! Allerdings werden große Strukturen, "
  "wie Große Mauern, große Kreise und sonstiges dadurch zerstört.\n\n"
  "Drücke 'b' um Zellen als Grenzen zu markieren. Solche Zellen, sowie "
  "Zellen hinter diesen können nicht kopiert oder gespeichert werden.\n\n")

// Princess Quest
//================

// Saved the Princess - "Wybawca" - "Uratuj Ksi??niczk?."
// Princess Challenge - "Misja Ksi??niczka" - "Zwyci?stwo w misji Ksi??niczka."
// Martial Artist - "Sztuki walki" - "Pozwól nieuzbrojonej Ksi??niczce wygra? walk?"

S("A mouse squeaks at you. It seems that it wants you to go somewhere. "
  "That's interesting, what could you find here?\n\n"
  "Note: in the part of the Palace that you are exploring during this "
  "quest, the distribution of monsters, pressure plates, and items has been "
  "changed somewhat, to make it a bit more suitable for less "
  "experienced players. The number of monsters does not depend on the "
  "number of Hypersian Rugs you have collected, and there are more "
  "opening plates.\n\n"
  "However, even with the normal distribution, it appears that it should be "
  "always possible to reach your goal. If you want this challenge, "
  "select it from the special game modes menu.",

  "Eine Maus piepst dich an. Es scheint als wolle sie das du dich irgendwo hin begibst. "
  "Interessant, was du dort wohl findest?\n\n"
  "In dem Teil des Palastes den du während dieser Quest erkundest "
  "wurde die Verteilung von Monstern, Druckplatten und Items etwas geändert "
  "um es nicht so erfahrenen Spielern zu vereinfachen. "
  "Die Anzahl der Monster basiert nicht auf der Anzahl der Hypersischen Teppiche "
  "in deinem Besitzt und es gibt mehr Öffnungsmechanismen.\n\n"
  "Selbst mit der normalen Monsterverteilung sollte es allerdings "
  "möglich sein immer das Ziel zu erreichen. Dieser Modus kann im "
  "Menü ausgewählt werden.")

S("\"When I visited the Palace, a mouse wanted me to go somewhere.\"",
  "\"Als ich den Palast besuchte wollte eine Maus das ich irgendwo hingehe.\"")

S("\"I wonder what was there...\"", "\"Ich frage mich was da war...\"")

N("Mouse", GEN_F, "Maus", "Mäuse", "Maus")

S("You hear a distant squeak!", "Du hörst ein Piepsen in der Ferne!")
S("%The1 squeaks in a confused way.", "%Die1 %1 piepst verwirrt.")
S("%The1 squeaks gratefully!", "%Die1 %1 piepst dankbar!");
S("%The1 squeaks hopelessly.", "%Die1 %1 piepst hoffnungslos.");
S("%The1 squeaks in despair.", "%Die1 %1 piepst voll Verzweiflung.");
S("%The1 squeaks sadly.", "%Die1 %1 piepst traurig.");
S("%The1 squeaks with hope!", "%Die1 %1 piepst hoffnungsvoll!");
S("%The1 squeaks happily!", "%Die1 %1 piepst fröhlich!");
S("%The1 squeaks excitedly!", "%Die1 %1 piepst aufgeregt!");

N("giant rug", GEN_O, "Riesiger Teppich", "Riesige Teppiche", "Riesigen Teppich")

S("This is the biggest Hypersian Rug you have ever seen! "
  "Unfortunately, it is too large to take it as a trophy.",
  "Das ist der größte Hypersische Teppich den du je gesehen hast! "
  "Leider ist er zu groß um ihn als Trophäe mitzunehmen.")

N("Prince", GEN_M, "Prinz", "Prinzen", "Prinz")
N("Princess", GEN_F, "Prinzessin", "Prinzessinnen", "Prinzessin")

S("%1 takes %his1 revenge on %the2!", "%1 nimmt Rache an %dem2 %d2!")
S("\"That should teach you to take me seriously!\"",
  "\"Das sollte dir beweisen mich Ernst zu nehmen!\"")

S("%The1 kisses you, and begs you to bring %him1 away from here.",
  "%Der1 %1 küsst dich und bittet dich %den1 von hier weg zu bringen.") // FIXME

S("\"I want my revenge. Stun a guard and leave him for me!\"",
  "Ich will Rache. Betäube eine Wache und überlasse sie mir!\"")

S("\"That felt great. Thanks!\"", "\"Danke, das hat sich gut angefühlt.\"")

S("\"Bring me out of here please!\"", "Bitte bring mich hier raus!\"")

S("%The1 kisses you, and thanks you for saving %him1.",
  "%Der1 %1 küsst dich und dankt dir für die Rettung.")

S("\"I have been trained to fight with a Hypersian scimitar, you know?\"",
  "Ich habe trainiert um mit einem Hypersischem Scimitar zu kämpfen, wusstest du das?\"")

S("\"I would love to come to your world with you!\"",
  "Ich würde gerne mit dir in deine Welt kommen!\"")

S("\"Straight lines stay close to each other forever, this is so romantic!\"",
  "\"Grade Linien bleiben einander für immer nah, wie romantisch!\"")

S("\"Maps... Just like the world, but smaller... how is that even possible?!\"",
  "\"Karten... Genau wie die Welt, nur kleiner... wie ist das möglich?!\"")

Orb("Love", "der Liebe")
S("Love takes time, but it heals all wounds, and transcends time and space.\n\n"
  "The Orb of Love is worth 30$$$, if you end the game with it.\n",

  "Liebe braucht Zeit, aber sie heilt alle Wunden und überschreitet die Grenzen von Raum und Zeit.\n\n"
  "Der Orb der Liebe ist 30$$$ wert wenn du das Spiel mit ihm beendest.\n")

// Princess Challenge:

S("%1 Challenge", "Herausforderung %1")
S("Save %the1 first to unlock this challenge!", "Rette zuerst %den1 %a1 um diese Herausforderung freizuschalten!")
S("Welcome to %the1 Challenge!", "Willkommen zu der %a1-Herausforderung!")
S("The more Hypersian Rugs you collect, the harder it is.", "Je mehr Hypersische Teppiche du sammelst desto schwieriger wird es.")
S("Follow the Mouse and escape with %the1!", "Folge der Maus und entkomme mit %dem1!")
S("Hardness frozen at %1.", "Festgefroren: %1.");
S("Congratulations! Your score is %1.", "Gratulation! Deine Punktzahl beträgt %1.")

S("u = undo",     "u = rückgängig")
S("f = flip %1",     "f = kippen %1")

S("Failed to save map to %1", "Karte konnte nicht nach %1 gespeichert werden")
S("Failed to load map from %1", "Karte konnte nicht von %1 geladen werden")
S("save whom", "wen retten?")
S("other", "Andere") // other keys in the main menu

// VERSION 7.4

// missing texts, refactored things, and rule changes
//====================================================

S("%The1 activates her Flash spell!", "%der1 %1 aktiviert den Blitzzauber!")

N("Fire", GEN_N, "Feuer", "Feuer", "Feuer")
S("This cell is on fire. Most beings and items cannot survive.",
  "Diese Zelle brennt. Die meisten Items und Monster können dies nicht überleben.")

N("Eternal Fire", GEN_N, "Ewiges Feuer", "Ewige Feuer", "Ewige Feuer") // FIXME: 3/=4
S("This fire never burns out.", "Dieses Feuer erlischt niemals.")

S("Some rubble.", "Trümmer.")

S("The Orb loses its power as it leaves the Land of Power!",
  "Der Orb verliert seine Kraft wenn du das Land der Macht verlässt!")

S("%The1 fills the hole!", "%Der1 %1 füllt das Loch!")

N("Tentacle+Ghost", GEN_F, "Tentakel+Geist", "Tentakel+Geister", "Tentakel+Geist")

// Land Overview
//===============

S("world overview", "Weltüberblick")
S("or 'o' to see the world overview", "oder 'o' um einen Überblick über die Welt zu sehen")

S("forbidden to find in %the1", "verboten in %der1 etwas zu finden")
S("too dangerous to use in %the1", "zu gefährlich um es in %der1 zu nutzen")
S("useless in %the1", "nutzlos in %der1")
S("only native Orbs allowed in %the1", "Nur heimische Orbs in %der1 erlaubt")
S("this Orb is never unlocked globally (only hubs)", "Dieser Orb wird niemals global freigeschaltet")
S("collect 25 %2 to unlock it in %the1", "Sammle 25x %2 um es in %der1 freizuschalten")
S("collect 3 %2 to unlock it in %the1", "Sammle 3x %2 um es in  %der1 freizuschalten")
S("native in %the1 (collect 10 %2)", "heimisch in %der1 (10x %2)")
S("native in %the1 (collect 1 %2)", "heimisch in %der1 (1x %2)")
S("secondary in %the1 (collect 10 %3, or 25 %2)", "sekundär in %der1 (10x %3, oder 25x %2)")
S("the native Orb of %the1", "der heimische Orb %der1")
S("this Orb appears on floors and is used by witches", "Dieser Orb erscheint auf dem Boden und wird von Hexen genutzt")
S("a prized Orb, it appears only in cabinets", "Ein wertvoller Orb der nur in Vitrinen erscheint")
S("this Orb never appears in %the1", "Dieser Orb erscheint nie in %der1")
S("Hub Land: orbs appear here if unlocked in their native land", "Zentrum: Orbs erscheinen hier wenn sie in ihrem Heimatland freigeschaltet wurden")
S("kill a monster, or collect 25 %2", "töte ein Monster oder sammle 25x %2")

S("Always available.\n", "Immer verfügbar.\n")
S("Treasure required: %1 $$$.\n", "Schätze benötigt: %1 $$$.\n")
S("Accessible only from %the1.\n", "Nur von %der1 %a1 aus erreichbar.\n")
S("Accessible only from %the1 (until finished).\n", "Nur von %der1 %a1 aus erreichbar (bis abgeschlossen).\n")

S("Accessible only from %the1 or %the2.\n", "Nur von %der1 %a1 oder %der %a2 aus erreichbar.\n")

S("Kills required: %1.\n", "Benötigte Kills: %1.\n")
S("Finished lands required: %1 (collect 10 treasure)\n",
  "Abgeschlossene Länder benötigt: %1 (sammle 10 Schätze)\n")

S("Treasure required: %1 x %2.\n", "Benötigte Schätze: %1 x %2.\n")

S("Alternatively: kill a %1.\n", "Alternativ: töte einen %a1.\n")

S("Kills required: any Elemental (Living Fjord/Dead Caves).\n",
  "Benötigte Kills: beliebiger Elementar (Lebender Fjord/Tote Höhle).")

S("Variants of %the1 are always available in the Random Pattern Mode.",
  "Varianten der %1 sind im Zufallsmuster-Modus verfügbar.")

S("Variants of %the1 are available in the Random Pattern Mode after "
  "getting a highscore of at least 10 %2.",
  "Varianten der %1 sind im Zufallsmuster-Modus verfügbar, "
  "nachdem eine Punktzahl von 10x %2 erreicht wurde.")

S(" kills: %1", " Kills: %1")
S(" $$$: %1", " $$$: %1")
S(" Hyperstone: %1/%2", " Hypersteine: %1/%2")
S(" Hell: %1/9", " Hölle: %1/9")

// improved editor

S("vector graphics editor -- press F1 for help", "Vektor Grafiken Editor -- drücke F1 um Hilfe zu erhalten")
S("pics to save/load:", "Bilder zum speichern/laden:")
S("level to save/load:", "Level zum speichern/laden:")

S("F4 = extension", "F4 = Erweiterung")
S("Enter = back", "Enter = zurück")
S("SPACE = map/graphics", "SPACE = Karte/Grafiken")

S("Emerald Pattern", "Smaragdmuster")
S("Palace Pattern", "Palastmuster")
S("Zebra Pattern", "Zebramuster")
S("rotational symmetry", "drehende Symmetrie")
S("symmetry 0-1", "Symmetrie 0-1")
S("symmetry 0-2", "Symmetrie 0-2")
S("symmetry 0-3", "Symmetrie 0-3")

S("display pattern codes (full)", "Muster Codes anzeigen (komplett)")
S("display pattern codes (simplified)", "Muster Codes anzeigen (vereinfacht)")
S("display only hexagons", "Nur Hexagone anzeigen")
S("display only heptagons", "Nur Heptagone anzeigen")
S("predesigned patterns", "Vorgefertigte Muster")

S("Gameboard", "Spielbrett")
S("random colors", "zufällige Farben")
S("emerald pattern", "Smaragdmuster")
S("four elements", "Vier Elemente")
S("eight domains", "Acht Bereiche")
S("zebra pattern", "Zebramuster")
S("three stripes", "Drei Streifen")
S("random black-and-white", "Zufalls Schwarz und Weiß")
S("p = paint", "p = Farbe")
S("r = regular", "r = regulär")

S("In this mode you can draw your own player characters, "
  "floors, monsters, and items. Press 'e' while hovering over "
  "an object to edit it. Start drawing shapes with 'n', and "
  "add extra vertices with 'a'. Press 0-9 to draw symmetric "
  "pictures easily. More complex pictures can "
  "be created by using several layers ('l'). See the edges of "
  "the screen for more keys.",

  "In diesem Modus kannst du deine eigenen Charaktere, Böden, Monster "
  "und Items zeichnen. Drücke 'e' während du auf ein Objekt zeigst um es "
  "zu bearbeiten. Fang an Formen mit 'n' zu zeichnen und füg mit 'a'. "
  "weitere Eckpunkte hinzu. Drücke 0-9 um einfach symmetrisch zu zeichnen. "
  "Komplexere Bilder können durch mehrere Lagen ('l') erzeugt werden. "
  "Weitere Hotkeys stehen am Rand des Bildschirms.")

S("Press 'r' to choose a regular pattern. When a pattern is on, "
  "editing a cell automatically edits all cells which are "
  "equivalent according to this pattern. You can choose from "
  "several patterns, and choose which symmetries matter "
  "for equivalence. Also, you can press Space to switch between "
  "the map and graphics editor quickly -- note that editing floors "
  "with the graphics editor also adheres to the pattern.",

  "Drücke 'r' um ein normales Muster zu wählen. Wenn ein Muster ausgewählt ist "
  "sorgt das ändern einer Zelle automatisch für die Änderung aller Zellen, "
  "die laut dem Muster gleich dieser sind. Du kannst aus mehreren Mustern "
  "wählen und bestimmen welche Symmetrien als gleich zählen. "
  "Durch das drücken von LEER wird zwischen dem Karten und Grafikeditor gewechselt. "
  "Das ändern von Böden mit dem Grafikeditor wirkt sich auch auf das Muster aus.")

S("monster" ,"Monster")
S("item", "Item")
S("floor", "Boden")
S("hexagonal", "hexagonal")
S("heptagonal", "heptagonal")
S("floor/pattern", "Boden/Muster")

S("l = layers: %1", "l = Ebenen: %1")
S("1-9 = rotations: %1", "1-9 = Drehungen: %1")
S("0 = symmetry", "0 = Symmetrie")
S("0 = asymmetry", "0 = Asymmetrie")
S("%1 vertices", "Eckpunkte: %1")
S("a = add v", "a = hinzufügen v")
S("m = move v", "m = bewegen v")
S("d = delete v", "d = entfernen v")
S("c = readd v", "c = wiederhinzufügen v")
S("b = reorder", "b = neu anordnen")
S("t = shift", "t = verlagern")
S("y = spin", "y = drehen")

S("'n' to start", "n = start")
S("z = zoom in", "z = reinzoomen")
S("o = zoom out", "o = rauszoomen")
S("g = grid", "g = Raster")
S("e = edit this", "e = editieren")

S("x: %1", "x: %1")
S("y: %1", "y: %1")
S("z: %1", "z: %1")
S("r: %1", "r: %1")
S("ϕ: %1°", "ϕ: %1°")

S("A fake Land with colored floors.",
  "Ein falsches Land mit farbigen Böden.")

S("random pattern mode", "Zufallsmuster Modus")

// Ivory Tower
//=============

N("Ivory Tower", GEN_M, "Elfenbeinturm", "Elfenbeintürme", "Elfenbeinturm")

S("Powerful wizards claimed this part of the world, to perform their magical "
  "experiments in peace and solitude. They have changed the direction of gravity, "
  "to make it even harder for intruders to reach them.\n\n"
  "Gravity works as follows: cells are unstable if they are empty, and there is "
  "no cell immediately below them which contains a wall. It is impossible to move "
  "from one unstable cell to another, except if moving down.",

  "Mächtige Zauberer haben diesen Teil der Welt für sich beansprucht um in "
  "Ruhe und Frieden ihre magischen Experimente durchführen zu können. "
  "Sie haben die Gravitation in diesem Land manipuliert um es Eindringlingen zu erschweren sie zu erreichen.\n\n"
  "Die Gravitation funktioniert wie folgt: Zellen sind instabil wenn sie "
  "leer sind und sich direkt unter ihnen keine Zelle mit Wand befindet. "
  "Es ist unmöglich sich von einer instabilen Zelle zu einer anderen zu bewegen außer wenn man sich nach unten bewegt.")

N("Servant", GEN_M, "Diener", "Diener", "Diener")
S("A simple servant of the master of the Ivory Tower.",
  "Ein einfacher Diener des Meisters des Elfenbeinturms.")

N("Gargoyle", GEN_M, "Gargoyle", "Gargoyles", "Gargoyle")
N("stone gargoyle", GEN_M, "Steingargoyle", "Steingargoyles", "Steingargoyle")
N("stone gargoyle floor", GEN_M, "Steingargoyle-Boden", "Steingargoyle-Böden", "Steingargoyle-Boden")
N("stone gargoyle bridge", GEN_F, "Steingargoyle-Brücke", "Steingargoyle-Brücken", "Steingargoyle-Brücke")

S("A being made of stone, who likes high buildings. It becomes normal stone when "
  "killed, but only if next to something stable -- otherwise it falls.",
  "Ein Wesen aus Stein das hohe Gebäude mag. Es wird zu normalem Stein "
  "wenn es stirbt, vorausgesetzt es ist neben etwas Stabilem. Ansonsten fällt es.")

N("Ivory Figurine", GEN_F, "Elfenbeinfigur", "Elfenbeinfiguren", "Elfenbeinfigur")

S("A beautiful figurine, made of ivory. Figurines close to the base of the Tower "
  "tend do disappear after you have collected many of them.",
  "Eine hübsche Figur aus Elfenbein. Figuren nah am Fuße des Turms neigen dazu "
  "zu verschwinden wenn du viele gesammelt hast.")

N("platform", GEN_F, "Plattform", "Plattformen", "Plattform")
S("You can stand here.", "Du kannst hier stehen.")

N("ladder", GEN_F, "Leiter", "Leitern", "Leiter")
S("You can use this ladder to climb the Tower.",
  "Du kannst diese Leiter nutzen um den Turm zu erklimmen.")

Orb("Matter", "der Materie")

S("This Orb allows to temporarily create impassable matter, either to block paths or "
  "to build bridges across chasms and waters.",
  "Dieser Orb erlaubt es dir, unpassierbare temporäre Materie zu erzeugen, um "
  "Pfade zu blockieren oder Brücken über Wasser und Schluchten zu bauen.")

N("temporary wall", GEN_F, "temporäre Wand", "temporäre Wände", "temporäre Wand")// FIXME: 3/=4 (3*)
N("temporary floor", GEN_M, "temporärer Boden", "temporäre Böden", "temporären Boden")
N("temporary bridge", GEN_F, "temporäre Brücke", "temporäre Brücken", "temporäre Brücke")

S("This structure will disappear after some time.", "Diese Struktur wird nach einiger Zeit verschwinden.")

S("Nothing to stand on here!", "Hier gibt es nichts worauf du stehen kannst!")
S("Gravity does not allow this!", "Die Gravitation erlaubt das nicht!")

// Elemental Planes
//==================

N("Elemental Planes", GEN_F, "Elementare Ebene", "Elementare Ebene", "auf der Elementaren Ebene")
N("Plane of Fire", GEN_F, "Feuerebene", "Feuerebenen", "Feuerebene ")
N("Plane of Earth", GEN_F, "Erdebene ", "Erdebenen", "Erdebene")
N("Plane of Air", GEN_F, "Luftebene", "Luftebenen", "Luftebene")
N("Plane of Water", GEN_F, "Wasserebene", "Wasserebenen", "Wasserebene")

S("The Elemental Planes are divided into four subzones: Planes of Fire, Water, Air, and Earth. "
  "You need to collect a Shard from each Plane to construct an Elemental Gem. "
  "It is dangerous to collect too many Shards of the same type without constructing a Gem.",

  "Die Elementare Ebene ist in 4 Zonen unterteilt: Die Feuerebene, die Erdebene, die Luftebene und die Wasserebene. "
  "Du brauchst eine Scherbe aus jeder Ebene um ein Elementjuwel herzustellen. "
  "Es ist äußerst gefährliche mehrere Scherben des selben Typs zu sammeln ohne ein Elementjuwel herzustellen.")

N("Fire Elemental", GEN_M, "Feuerelementar", "Feuerelementare", "Feuerelementar")

S("This monster leaves a trail of fire behind.",
  "Dieses Monster hinterlässt einen brennenden Pfad.")

N("Air Elemental", GEN_M, "Luftelementar", "Luftelementare", "Luftelementar")

S("An Air Elemental looks like a live tornado. Once you are three (or less) cells from it, "
  "it is impossible to move closer, due to strong winds. You can stand and wait, though. "
  "This also affects most monsters.",

  "Ein Luftelementar sieht aus wie ein lebender Tornado. "
  "Sobald man 3 Zellen oder weniger von ihm entfernt ist, ist es dank der starken Winde "
  "unmöglich näher zu kommen. Du kannst allerdings stehen und warten.")

N("Fire Shard", GEN_F, "Feuerscherbe", "Feuerscherben", "Feuerscherbe")
N("Air Shard", GEN_F, "Luftscherbe", "Luftscherben", "Luftscherbe")
N("Water Shard", GEN_F, "Wasserscherbe", "Wasserscherben", "Wasserscherbe") N("Earth Shard", GEN_F, "Erdscherbe", "Erdscherben", "Erdscherbe")
N("Elemental Gem", GEN_N, "Elementjuwel", "Elementjuwelen", "Elementjuwel")

Orb("Summoning", "der Beschwörung")

S("This orb allows you to summon monsters. Usually, they are either Elementals or "
  "native creatures. While the monsters do not like being summoned, and will "
  "attack you once they recover from summoning sickness, such summoning "
  "often has its uses.",
  "Dieser Orb erlaubt es dir Monster zu beschwören. Diese sind meist Elementare, "
  "oder einheimische Monster. Auch wenn Monster nicht gerne beschworen werden "
  "und sie dich angreifen sobald die Beschwörungsübelkeit vorüber ist "
  "haben Beschwörungen oft einen Nutzen.")

N("limestone wall", GEN_F, "Kalkstein Wand", "Kalkstein Wände", "Kalkstein Wand")

S("Simply a wall. Mostly.", "Eine einfache Wand. Größtenteils.")

// Zebra
//=======

N("Zebra", GEN_N, "Zebra", "Zebras", "in Zebra")
S("Everything in this Land has black and white stripes.",
  "Alles in diesem Land hat schwarze und weiße Streifen.")

N("Striped Dog", GEN_M, "Gestreifter Hund", "Gestreifte Hunde", "Gestreiften Hund")
S("A predator native to the Zebra.", "Ein Raubtier das im Zebra heimisch ist.")

N("Onyx", GEN_M, "Onyx", "Onyxe", "Onyx")
S("A black gem with white stripes. It is beautiful.", "Ein schwarzer Edelstein mit weißen Streifen. Er ist wunderschön.")

// Crossroads III
//================

N("Crossroads III", GEN_F, "Kreuzungen III", "Kreuzungen III", "auf den Kreuzungen III")

S("An alternate layout of the Crossroads. Great Walls cross here at right angles.",
  "Ein alternatives Layout der Kreuzungen. Große Mauern kreuzen sich hier in rechten Winkeln.")

S("Cannot create temporary matter on a monster!", "Temporäre Materie kann nicht auf einem Monster erzeugt werden!");
S("Cannot create temporary matter on an item!", "Temporäre Materie kann nicht auf einem Item erzeugt werden!");
S("Cannot create temporary matter here!", "Hier kann keine temporäre Materie erzeugt werden!");
S("Cannot summon on a monster!", "Kann nicht auf einem Monster beschworen werden!");
S("No summoning possible here!", "Beschwören nicht möglich!");
S("You summon %the1!", "Du beschwörst %den1 %a1!")

S("F4 = file", "F4 = Datei")

// VERSION 8.0
//=============

S("The Air Elemental blows you away!", "Der Luftelementar weht dich weg!")

// appended to cave troll description
S(" Additionally, all items around the killed Troll will be destroyed.",
  " Des weiteren werden alle Items um den getöteten Troll zerstört.")

// 'dead cave troll' and 'dead troll' are separated now

N("dead rock troll", GEN_M, "toter Felsentroll" ,"tote Felsentrolle", "toten Felsentroll")

S("There are several species of trolls living in the hyperbolic world. "
  "Some of them leave this wall behind them when they die.",

  "Es gibt mehrere verschiedene Trollgattungen in der hyperbolischen Welt. "
  "Manche von ihnen hinterlassen Wände wenn sie sterben.")

// paper model creator
//---------------------

S("paper model creator", "Papiermodell Schöpfer")
S("synchronize net and map", "Synchronisier Netz und Karte")
S("display the scope", "Bereich anzeigen")
S("create the model", "Erzeuge das Modell")
S("back to HyperRogue", "Zurück zu HyperRogue")
S("design the net", "entwirf das Netz")

S("The paper model created as papermodel-*.bmp", "Das Papiermodell wurde als papermodel-*.bmp erzeugt")
S("Failed to load the file 'papermodeldata.txt'", "papermodeldata.txt konnte nicht geladen werden.")
S("Could not save the paper model data", "Papiermodell konnte nicht gespeichert werden")

// pure tactics mode
//-------------------

S("pure tactics mode", "Strategiemodus")
S("Not available in the pure tactics mode!", "Nicht verfügbar im Strategiemodus!")
S("\"The Knights of the Horocyclic Table salute you!\"", "\"Die Ritter der Horozyklischen Tafel salutieren!\"")
S("press 0 to leave this mode", "Drücke 0 um diesen Modus zu verlassen")
S("Collect %1x %2 to unlock", "Sammle %1x %2 zum Freischalten")

S("In the pure tactics mode, you concentrate on a specific land. "
  "Your goal to obtain as high score as possible, without using "
  "features of the other lands. You can then compare your score "
  "with your friends!\n\n"

  "You need to be somewhat proficient in the normal game to "
  "unlock the given land in this challenge "
  "(collect 20 treasure in the given land, or 2 in case of Camelot).\n\n"

  "Since getting high scores in some lands is somewhat luck dependent, "
  "you play each land N times, and your score is based on N consecutive "
  "plays. The value of N depends on how 'fast' the land is to play, and "
  "how random it is.\n\n"

  "In the Caribbean, you can access Orbs of Thorns, Aether, and "
  "Space if you have ever collected 25 treasure in their native lands.\n\n"

  "The rate of treasure spawn is static in this mode. It is not "
  "increased by killing monsters.\n\n"

  "Good luck, and have fun!",

  "Im Strategiemodus konzentrierst du dich auf ein einziges Land. "
  "Das Ziel ist es eine möglichst hohe Punktzahl zu erreichen ohne "
  "features anderer Länder zu nutzen. Du kannst deine Punktzahl "
  "mit denen deiner Freunde vergleichen!\n\n"

  "Du musst im normalen Spiel etwas erfahrener sein um das Land "
  "in dieser Herausforderung freizuschalten. "
  "(Sammle 20 Schätze im jeweiligem Land, oder 2 im Fall von "
  "Camelot).\n\n"

  "Da die Punktzahl in manchen Ländern sehr glücksbasierend sein kann, "
  "wird jedes Land N mal gespielt und die Punktzahl basiert auf N Durchläufen. "
  "Die Anzahl N hängt davon ab wie 'schnell' und zufällig das Land ist.\n\n"

  "In der Karibik hast du Zugriff auf den Orb der Dornen, "
  "den Orb des Aether und den Orb des Raumes wenn zuvor "
  "25 Schätze in ihren Heimatländern gesammelt wurden.\n\n"

  "Die Anzahl der Schätze in diesem Modus ist festgelegt "
  "und wird nicht durch das töten von Monstern erhöht.\n\n"

  "Viel Glück und Erfolg!")

// Yendor Challenge
//------------------

S("Yendor Challenge", "Yendor Herausforderung")
S("Collect 10 treasures in various lands to unlock the challenges there",
  "Sammle 10 Schätze in mehreren Ländern um diese Herausforderung freizuschalten")

S("easy", "einfach")
S("challenge", "herausfordernd")

S("Challenges do not get harder", "Herausforderungen werden nicht schwieriger")
S("Each challenge gets harder after each victory", "Die Schwierigkeit einer Herausforderung steigt nach jedem Sieg.")

S(" (won!)", " (Gewonnen!)")
S(" (won at level %1!)", " (Mit Level %1 gewonnen!)")
S("(locked)", "(Gesperrt)")

S("There are many possible solutions to the Yendor Quest. In the Yendor "
  "Challenge, you will try many of them!\n\n"
  "Each challenge takes part in a specific land, and you have to use what "
  "you have available.\n\n"

  "You need to obtain an Orb of Yendor in the normal game to activate "
  "this challenge, and (ever) collect 10 treasures in one or two lands "
  "to activate a specific level.\n\n"

  "After you complete each challenge, you can try it again, on a harder "
  "difficulty level.\n\n"

  "All the solutions showcased in the Yendor Challenge work in the normal "
  "play too. However, passages to other lands, and (sometimes) some land features "
  "are disabled in the Yendor "
  "Challenge, so that you have to use the expected method. Also, "
  "the generation rules are changed slightly for the Palace "
  "and Minefield while you are looking for the Orb of Yendor, "
  "to make the challenge more balanced "
  "(but these changes are also active during the normal Yendor Quest).\n\n"

  "You get 1000 points for each challenge won, and 1 extra point for "
  "each extra difficulty level.",

  "Es gibt viele mögliche Lösungen für die Quest von Yendor. "
  "Während der Yendor Herausforderung wirst du viele davon ausprobieren!\n\n"
  "Jede Herausforderung ist auf ein bestimmtes Land begrenzt und du musst "
  "nutzen was gegeben ist.\n\n"
  "Zum Freischalten dieser Herausforderung muss ein Orb von Yendor "
  "im normalem Modus gesammelt werden sowie 10 Schätze in ein oder zwei "
  "Ländern um bestimmte Level zu aktivieren.\n\n"

  "Nach dem Beenden einer Herausforderung kannst du eine schwierigere Version dieser spielen.\n\n"

  "Alle Lösungen der Yendor-Herausforderung funktionieren auch im normalem Spiel. "
  "Allerdings sind Wege zu anderen Ländern in der Yendor-Herausforderung "
  "deaktiviert, somit bleiben weniger Lösungsmöglichkeiten. "
  "Außerdem kann verändert werden wie der Palast und das Minenfeld "
  "generiert werden um es einfacher zu machen einen Orb von Yendor zu finden. "
  "(Diese Änderungen sind auch während des normalen Yendorquest aktiviert).\n\n")

S("Unlock this challenge by getting the Orb of Yendor!",
  "Finde einen Orb von Yendor um diese Herausforderung freizuschalten!")

S("Collect 10 treasures in various lands to unlock the challenges there",
  "Sammle 10 Schätze in den verschiedenen Ländern um Herausforderungen freizuschalten")

// Wild West
//-----------

N("Wild West", GEN_M, "Wilder Westen", "Wilde Westen", "im Wilden Westen")
N("Outlaw", GEN_M, "Bandit" ,"Banditen", "Bandit")
N("Bounty", GEN_N, "Kopfgeld", "Kopfgelder", "Kopfgeld")
N("saloon wall", GEN_F, "Saloon Wand", "Saloon Wände", "Saloon Wand")
N("Revolver", GEN_M, "Revolver", "Revolver", "Revolver")

S("%The1 shoots you!", "%Der1 %1 erschießt dich!")
S("You shoot %the1!", "Du erschießt %den1 %a1!")

S("Take a revolver, kill outlaws, collect bounties.\n\n"
  "Note: since this land is anachronistic, it is not available in normal game. "
  "It is only available in special modes.",

  "Schnapp dir einen Revolver, erschieß Banditen und beanspruche das Kopfgeld!\n\n"
  "Hinweis: Dieses Land ist nur in Spezialmodi verfügbar.")

// Land of Storms
//----------------

S("Whenever after your move there is a connection between a charged and a "
  "grounded cell, there is a short circuit. All cells on any "
  "path connecting a charged and a grounded cell (without repeated cells, "
  "or two consecutive grounded/charged cells) become damaged.\n\n"

  "Sandstone walls and most creatures are conductive. Great Walls are "
  "isolators, but lands beyond them count as grounded.\n\n"

  "Fulgurite, the treasure, is created when you manage to short circuit "
  "a sandstone wall, or a Rich Metal Beast.\n\n"

  "Trolls leave conductive rocks when killed, and Metal Beasts can only "
  "be killed by electricity -- your attacks only stun them, or push "
  "them away if already stunned.",

  "Nach jedem Zug gibt es einen Kurzschluss, vorausgesetzt es gibt eine "
  "Verbindung zwischen einer geladenen und einer geerdeten Zelle. "
  "Alle Zellen auf einem Pfad der eine geladene mit einer geerdeten "
  "Zelle verbindet werden beschädigt.\n\n"

  "Sandsteinwände und die meisten Monster sind leitfähig. Große Mauern "
  "sind Isolatoren aber Zellen hinter ihnen zählen als geerdet.\n\n"

  "Der Schatz Fulgurit entsteht wenn eine Sandsteinwand oder ein "
  "ergiebiges Metallbiest kurzgeschlossen wird.\n\n"

  "Trolle hinterlassen leitfähige Steine wenn sie sterben und Metallbiester "
  "können nur durch Elektrizität getötet werden -- Deine Angriffe können "
  "sie nur betäuben oder wegstoßen wenn sie bereits betäubt sind.")

N("Land of Storms", GEN_N, "Land der Stürme", "Länder der Stürme", "im Land der Stürme")
N("charged wall", GEN_F, "geladene Wand", "geladene Wände", "geladene Wand")
N("grounded wall", GEN_F, "geerdete Wand", "geerdete Wände", "geerdete Wand")
N("metal wall", GEN_F, "Metallwand", "Metallwände", "Metallwand")
N("sandstone wall", GEN_F, "Sandsteinwand", "Sandsteinwände", "Sandsteinwand")
N("Storm Troll", GEN_M, "Sturmtroll", "Sturmtrolle", "Sturmtroll")
N("Metal Beast", GEN_N, "Metallbiest", "Metallbiester", "Metallbiest")
N("Rich Metal Beast", GEN_N, "Ergiebiges Metallbiest", "Ergiebige Metallbiester", "Ergiebige Metallbiest")// FIXME: 3/=4
N("electric discharge", GEN_N, "Elektrische Entladung", "Elektrische Entladungen", "Elektrische Entladung")// FIXME: 3/=4

S("There is a flash of thunder!", "Ein Blitz!")

Orb("Stunning", "der Betäubung")

S("This Orb allows you to target monsters to stun them. "
  "10 charges are used to stun for 5 turns. Does not "
  "work against multi-tile monsters.",

  "Dieser Orb erlaubt es dir Monster zu betäuben. "
  "10 Ladungen betäuben für 5 Züge. Dies funktioniert nicht "
  "gegen große Monster die mehrere Felder bedecken.")

S("You stun %the1!", "Du betäubst %den1 %a1!")

// Overgrown Woods
//-----------------

Orb("Luck", "des Glücks")

S("This Orb allows you to find new lands more easily. "
  "Lands where you have already collected less treasure, "
  "and especially the Crossroads, are more likely to "
  "spawn while you have this. Additionally, Orbs of Safety "
  "are more likely to spawn in the Whirlpool.",

  "Dieser Orb erlaubt es dir neue Länder leichter zu entdecken. "
  "Länder in denen du bisher weniger Schätze gesammelt hast "
  "und besonders Kreuzungen sind wahrscheinlicher anzutreffen "
  "so lange du ihn besitzt. Des weiteren sind Orbs der Geborgenheit "
  "wahrscheinlicher im Strudel zu finden.")

N("Overgrown Woods", GEN_M, "Überwucherter Wald", "Überwucherte Wälder", "Überwucherter Wald")
N("Mutant Ivy", GEN_M, "Mutierter Efeu", "Mutierte Efeue", "Mutierten Efeu")
N("Mutant Sapling", GEN_M, "Mutierter Sätzling", "Mutierte Sätzlinge", "Mutierten Sätzling")
N("Forest Troll", GEN_M, "Waldtroll", "Waldtrolle", "Waldtroll")

S("Forest Trolls create an impassable wall when they die.",
  "Waldtrolle erschaffen eine unpassierbare Wand wenn sie sterben.")

S("The Overgrown Woods are filled with mutant ivies! These plants "
  "grow very fast. Each leaf, after being grown, can grow itself "
  "on the next turn. However, each part is only able to grow "
  "once in 16 turns. Outside of the Overgrown Woods, the Mutant Ivy "
  "may grow only on hexagonal cells.\n\n"
  "Maybe such fast growing plants could help you solve the problem "
  "of hunger in your world? Kill the Mutant Ivies to collect Mutant Saplings.",

  "Der Überwucherte Wald ist voll mit mutiertem Efeu! Diese Pflanzen "
  "wachsen sehr schnell. Jedes Blatt, nachdem es gewachsen ist kann im "
  "nächsten Zug selbst wachsen. Allerdings kann jeder Teil nur 1x alle 16 "
  "Züge wachsen. Außerhalb des überwuchertem Walds wächst mutierter Efeu "
  "nur auf hexagonalen Zellen.\n\n"
  "Vielleicht können die schnell wachsenden Pflanzen das Hungerproblem in "
  "deiner Welt lösen? Töte mutierten Efeu um mutierte Sätzlinge zu erhalten.")

S("Trees in this forest can be cut down. Big trees take two turns to cut down.",
  "Bäume in diesem Wald können gefällt werden. Große Bäume zu fällen dauert zwei Züge.")

S("Your power is drained by %the1!", "Deine Kraft wird von %dem1 %d1 ausgesaugt!")
S("Wow! That was close.", "Wow! Das war knapp.");
S("Collect four different Elemental Shards!", "Sammle vier verschiedene Elementscherben!")
S("Unbalanced shards in your inventory are dangerous.",
  "Unbalancierte Scherben in deinem Inventar sind gefährlich.")
S("You construct some Elemental Gems!", "Du erstellst ein paar Elementjuwelen!")

N("Fulgurite", GEN_M, "Fulgurit", "Fulgurite", "Fulgurit")

S("Alternatively: kill a %1 in %the2.\n", "Alternativ: töte einen %a1 %d2.\n") // FIXME

S("TRANSLATIONWARNING", "VORSICHT: Die deutsche Übersetzung enthält keine")
S("TRANSLATIONWARNING2", "Funktionen nach Version 8.1! (Arbeite dran <3)")

#undef Orb

