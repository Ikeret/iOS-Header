//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKViewElement.h>

@class IKDOMFeatureNavigationDocument, NSString;

@interface IKSplitTemplate : IKViewElement
{
    NSString *_displayMode;
    IKDOMFeatureNavigationDocument *_leftNavigationDocument;
    IKDOMFeatureNavigationDocument *_rightNavigationDocument;
}

+ (id)supportedFeatures;
- (void).cxx_destruct;
@property(readonly, nonatomic) IKDOMFeatureNavigationDocument *rightNavigationDocument; // @synthesize rightNavigationDocument=_rightNavigationDocument;
@property(readonly, nonatomic) IKDOMFeatureNavigationDocument *leftNavigationDocument; // @synthesize leftNavigationDocument=_leftNavigationDocument;
@property(copy, nonatomic) NSString *displayMode; // @synthesize displayMode=_displayMode;
- (id)_featureWithName:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

