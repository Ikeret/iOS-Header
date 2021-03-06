//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExposureNotification/NSSecureCoding-Protocol.h>

@class ENRegion, NSDate, NSString, NSUUID;

@interface ENExposureNotification : NSObject <NSSecureCoding>
{
    NSDate *_date;
    NSUUID *_identifier;
    NSString *_localizedBodyText;
    NSString *_localizedDetailBodyText;
    NSString *_localizedSubjectText;
    ENRegion *_region;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) ENRegion *region; // @synthesize region=_region;
@property(copy, nonatomic) NSString *localizedSubjectText; // @synthesize localizedSubjectText=_localizedSubjectText;
@property(copy, nonatomic) NSString *localizedDetailBodyText; // @synthesize localizedDetailBodyText=_localizedDetailBodyText;
@property(copy, nonatomic) NSString *localizedBodyText; // @synthesize localizedBodyText=_localizedBodyText;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *localizedTitleText;
- (id)initWithCoder:(id)arg1;

@end

