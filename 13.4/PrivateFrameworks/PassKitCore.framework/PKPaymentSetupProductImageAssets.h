//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>

@interface PKPaymentSetupProductImageAssets : NSObject <NSCopying>
{
    struct CGImage *_digitalCardImage;
    struct CGImage *_plasticCardImage;
    struct CGImage *_thumbnailImage;
    struct CGImage *_logoImage;
}

@property(nonatomic) struct CGImage *logoImage; // @synthesize logoImage=_logoImage;
@property(nonatomic) struct CGImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(nonatomic) struct CGImage *plasticCardImage; // @synthesize plasticCardImage=_plasticCardImage;
@property(nonatomic) struct CGImage *digitalCardImage; // @synthesize digitalCardImage=_digitalCardImage;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

