# esim2 Muodostin ja Tuohoaja

Tässä esimerkissä Person-luokkaan on lisätty **construktori** eli muodostin seuraavalla koodilla 

<pre>
Person(){
    cout&lt;&lt;"Person luokan muodostinta kutsuttiin"&lt;&lt;endl;
}
</pre>

luokkaan on lisätty muyös **destruktori** eli tuhoaja koodilla 

<pre>
~Person(){
    cout&lt;&lt;"Person luokan tuhoajaa kutsuttiin"&lt;&lt;endl;
}
</pre>

Noita ei tarvitse lisätä, jollei niihin halua jotain koodia, kuten edellä nuo tulostuslauseet. Jollet niitä lisää, niin voit ajatella, että kääntäjä on lisännyt ne ikäänkuin näkymättöminä.