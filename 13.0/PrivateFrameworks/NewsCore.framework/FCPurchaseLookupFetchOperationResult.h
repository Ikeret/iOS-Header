//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface FCPurchaseLookupFetchOperationResult : NSObject
{
    NSDictionary *_channelIDsByPurchaseID;
    NSDictionary *_bundleChannelIDsByPurchaseID;
}

@property(copy, nonatomic) NSDictionary *bundleChannelIDsByPurchaseID; // @synthesize bundleChannelIDsByPurchaseID=_bundleChannelIDsByPurchaseID;
@property(copy, nonatomic) NSDictionary *channelIDsByPurchaseID; // @synthesize channelIDsByPurchaseID=_channelIDsByPurchaseID;
- (void).cxx_destruct;
- (id)initWithChannelIDsByPurchaseID:(id)arg1 bundleChannelIDsByPurchaseID:(id)arg2;

@end

