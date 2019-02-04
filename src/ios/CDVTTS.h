/*
	Cordova Text-to-Speech Plugin
	https://github.com/balazssuch/cordova-plugin-tts

	by Balazs Such
	https://github.com/balazssuch

	MIT License
 */

#import <Cordova/CDV.h>
#import <AVFoundation/AVFoundation.h>

@interface CDVTTS : CDVPlugin <AVSpeechSynthesizerDelegate> {
    AVSpeechSynthesizer* synthesizer;
    NSString* lastCallbackId;
    NSString* callbackId;
}

- (void)speak:(CDVInvokedUrlCommand*)command;
- (void)stop:(CDVInvokedUrlCommand*)command;
- (void)checkLanguage:(CDVInvokedUrlCommand*)command;
@end
