//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface HROnboardingBulletPoint : NSObject
{
    UIImage *_bulletImage;
    NSString *_bulletTitleString;
    NSString *_bulletBodyString;
}

+ (id)bulletPointWithImage:(id)arg1 title:(id)arg2 body:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *bulletBodyString; // @synthesize bulletBodyString=_bulletBodyString;
@property(readonly, nonatomic) NSString *bulletTitleString; // @synthesize bulletTitleString=_bulletTitleString;
@property(readonly, nonatomic) UIImage *bulletImage; // @synthesize bulletImage=_bulletImage;
- (id)initWithImage:(id)arg1 title:(id)arg2 body:(id)arg3;

@end

