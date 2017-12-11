Developmental Journal.

Overview:
I've noted that for the systems programming class I've had trouble retaining information about C Programming. I'm also frankly more of a self taught CS and Biology guy, so I think that writing down the reasons for decisions and being open up for criticisim would be good for me and my hackery bullshit.

fastaInput:
The general idea is that everything is going to be kept in memory as this is run and then the primers are outputted.

With the Stanardized Line Sizes coming from the sources and well, the efficency fetish vibe we're going for here I'm going to keep these as tight as possible. They're 80 chars wide and my test case runs at 147 lines. Based on the stress of inserts and wet lab lore, I doubt people are going to go for a singular insert in excess of 1000 bps. I might go back and have some conditional switch to create larger files.

These files can contain multiple fasta sequences in them. 

________________________________________________________
12/10/2017
Finally Figured out the melting temp calculator. The equation and algo is simple enough, but had just the hardest time with the memory allocation for the class struct. I think their would be a fair argument to be had that C Stack Overflow Posts are some pretentious non-helpful bullshit. The rhetoric that C is simplistic is more than a little reductive.

Next thing up is to start randomly generating primers. This is going to require a unique melting temp function for each of the randomly generated primers. I think I'm just going to cap it at a finite nucleotide length because I don't really see the point (for this school project) in generating multilengths when there not going to be used. I'll re-evaluate over the winter break.

After that I need to add the forking logic and the network logic. I'm regretting adding the network capability at the end of that meeting, but I kind of got the vibe that I wasn't hitting the right notes to make the prof comfortable. We'll see.
