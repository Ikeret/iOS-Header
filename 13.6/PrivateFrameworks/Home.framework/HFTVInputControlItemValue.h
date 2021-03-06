//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface HFTVInputControlItemValue : NSObject <NSCopying>
{
    _Bool _isHidden;
    _Bool _isSelected;
    NSNumber *_identifier;
    NSString *_name;
}

+ (id)valueWithInputName:(id)arg1 identifier:(id)arg2 isHidden:(_Bool)arg3 isSelected:(_Bool)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) _Bool isConfigured;
- (id)initWithInputName:(id)arg1 identifier:(id)arg2 isHidden:(_Bool)arg3 isSelected:(_Bool)arg4;

@end

