//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError;

@protocol CHHapticClientInterface
- (void)clientStoppedForReason:(unsigned long long)arg1 error:(NSError *)arg2;
- (void)clientCompletedWithError:(NSError *)arg1;
- (void)sequenceFinished:(unsigned long long)arg1 error:(NSError *)arg2;
@end

