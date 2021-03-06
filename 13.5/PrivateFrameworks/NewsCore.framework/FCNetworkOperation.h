//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@interface FCNetworkOperation : FCOperation
{
}

- (_Bool)_canRetryWithError:(id)arg1 retryAfter:(id *)arg2;
- (_Bool)shouldStartThrottlingWithError:(id)arg1 retryAfter:(double *)arg2;
- (_Bool)canRetryWithError:(id)arg1 retryAfter:(id *)arg2;
- (unsigned long long)maxRetries;
@property(readonly, nonatomic) double preferredTimeoutIntervalForRequest;

@end

