//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCNewsletterEndpointConnection;

@interface FCGetNewsletterSubscriptionOperation : FCOperation
{
    FCNewsletterEndpointConnection *_endpointConnection;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) FCNewsletterEndpointConnection *endpointConnection; // @synthesize endpointConnection=_endpointConnection;
- (void)performOperation;
- (id)initWithEndpointConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

