Developmental Journal.

Overview:
I've noted that for the systems programming class I've had trouble retaining information about C Programming. I'm also frankly more of a self taught CS and Biology guy, so I think that writing down the reasons for decisions and being open up for criticisim would be good for me and my hackery bullshit.

fastaInput:
The general idea is that everything is going to be kept in memory as this is run and then the primers are outputted.

With the Stanardized Line Sizes coming from the sources and well, the efficency fetish vibe we're going for here I'm going to keep these as tight as possible. They're 80 chars wide and my test case runs at 147 lines. Based on the stress of inserts and wet lab lore, I doubt people are going to go for a singular insert in excess of 1000 bps. I might go back and have some conditional switch to create larger files.

These files can contain multiple fasta sequences in them. 
