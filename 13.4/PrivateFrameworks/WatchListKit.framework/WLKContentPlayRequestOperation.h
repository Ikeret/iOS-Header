//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString, WLKContentPlayResponse;

@interface WLKContentPlayRequestOperation : WLKUTSNetworkRequestOperation
{
    NSString *_canonicalID;
    WLKContentPlayResponse *_response;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WLKContentPlayResponse *response; // @synthesize response=_response;
@property(readonly, copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
- (void)processResponse;
- (id)initWithCanonicalID:(id)arg1 caller:(id)arg2;

@end

