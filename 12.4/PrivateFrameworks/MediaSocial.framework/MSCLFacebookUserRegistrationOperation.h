//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSVComplexOperation.h>

@class NSObject, NSString, SKUIMediaSocialAuthor;
@protocol OS_dispatch_queue;

@interface MSCLFacebookUserRegistrationOperation : SSVComplexOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_token;
    SKUIMediaSocialAuthor *_author;
    CDUnknownBlockType _outputBlock;
}

@property(copy, nonatomic) CDUnknownBlockType outputBlock; // @synthesize outputBlock=_outputBlock;
@property(readonly, copy, nonatomic) SKUIMediaSocialAuthor *author; // @synthesize author=_author;
@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)main;
- (id)initWithToken:(id)arg1 forAuthor:(id)arg2;

@end

