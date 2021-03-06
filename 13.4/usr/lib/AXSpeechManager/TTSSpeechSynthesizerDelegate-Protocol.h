//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AXSpeechManager/NSObject-Protocol.h>

@class NSError, NSString, NSURL, TTSSpeechRequest, TTSSpeechSynthesizer;

@protocol TTSSpeechSynthesizerDelegate <NSObject>

@optional
- (void)speechSynthesizer:(TTSSpeechSynthesizer *)arg1 didSynthesizeSilentlyToURL:(NSURL *)arg2 forRequest:(TTSSpeechRequest *)arg3;
- (void)speechSynthesizer:(TTSSpeechSynthesizer *)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 forRequest:(TTSSpeechRequest *)arg3;
- (void)speechSynthesizer:(TTSSpeechSynthesizer *)arg1 didContinueSpeakingRequest:(TTSSpeechRequest *)arg2;
- (void)speechSynthesizer:(TTSSpeechSynthesizer *)arg1 didPauseSpeakingRequest:(TTSSpeechRequest *)arg2;
- (void)speechSynthesizer:(TTSSpeechSynthesizer *)arg1 didFinishSpeakingRequest:(TTSSpeechRequest *)arg2 successfully:(_Bool)arg3 phonemesSpoken:(NSString *)arg4 withError:(NSError *)arg5;
- (void)speechSynthesizer:(TTSSpeechSynthesizer *)arg1 didFinishSpeakingRequest:(TTSSpeechRequest *)arg2 successfully:(_Bool)arg3 withError:(NSError *)arg4;
- (void)speechSynthesizer:(TTSSpeechSynthesizer *)arg1 didStartSpeakingRequest:(TTSSpeechRequest *)arg2;
@end

