import React from 'react';
import { StyleSheet, Text, View, ImageBackground } from 'react-native';

export default function App() {
  return (

    <View style={styles.container}>
            <Text>SUPER MARIOOO</Text>
    <ImageBackground source={{uri:'https://akns-images.eonline.com/eol_images/Entire_Site/201785/rs_634x1024-170905110758-634.Mario-JR-090517.jpg?fit=inside|900:auto&output-quality=90'}} style={{width: '100%', height: '100%'}}>
    <Text>SUPER LUGI</Text>
  </ImageBackground>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
    alignItems: 'center',
    justifyContent: 'center', 
  },
});
