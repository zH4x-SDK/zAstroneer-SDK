#pragma once

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BaseSediment_AnimBP.BaseSediment_AnimBP_C
// 0x450A (0x48DA - 0x03D0)
class UBaseSediment_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_26F3FA18410AD749C7AB54A97C97169C;      // 0x03D8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_139DE2364C660D5DF28235B219B753CC;// 0x0420(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_351416324F686FEED06B0C9151706C97;// 0x0458(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D8C334F64A55734046E3AD899B0E1918;// 0x04D0(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_977CD1A34C419CD318A211A08937C569;// 0x0548(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_F2D737DF43B1351FF06267B8FC94129C;// 0x05C0(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_53A256E24D07FF4CA0CCFA9AABA9EDC6;// 0x0638(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_61F700034F21479011A6BFA2B31B15BE;// 0x06B0(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8BF51B6A4A793F00F2E76D98A969D601;// 0x0728(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3564A63D4C0BC29C5B1C74A30D62A979;// 0x07A0(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_F5B6CC7848A724CE20C930B1658124D6;// 0x0818(0x0078)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4F11DF404A5197D4ECBD988864417479;// 0x0890(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3FABE7234201DE8E6B0AAF856BDDA4CF;// 0x0910(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_783E3B1948736DC951DCFE9B1346E0FF;// 0x0990(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D90F445144CB3BD9299E19A2BFEC5C52;// 0x0A10(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2CCB63ED4B95A896A6B1A9B4A3EB511E;// 0x0A90(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5F843EB6457B5DDD94E13D9A33A2E1DB2;// 0x0B00(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0032D47C4926F108587EFCB7CA8643AB;// 0x0B48(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6ADF149A4F62364C4C055893AE120DF32;// 0x0BB8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B16625B2497E900931E110957D7B6097;// 0x0C00(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5F843EB6457B5DDD94E13D9A33A2E1DB;// 0x0C70(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F74EB5294625783E06B2BCAAB016AE4D;// 0x0CB8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6ADF149A4F62364C4C055893AE120DF3;// 0x0D28(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0AE6D72D4A7495934D54D9BF2ED90012;// 0x0D70(0x00D8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0E48(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_225DA34F49B5A83E8AD94EB536B5D219;// 0x0E50(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E45117504FC57E6716EBABBE0C167E93;// 0x0ED0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F2F473DD4F53A54E7D1DB5B2501AD87D;// 0x0F50(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9F94A665489563621C51DB8F9D1B1162;// 0x0FD0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E140750D44B23547DE848495F65B09AB;// 0x1050(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8B1F20CA41AA3AB386D52780196AF3EA2;// 0x10C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8F28F03049D5E84F0B6F4CA112AB95E1;// 0x1108(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_686842DE46686BC7E045FEB96F008D362;// 0x1178(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E409912F43E410070FF52598E356574D;// 0x11C0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8B1F20CA41AA3AB386D52780196AF3EA;// 0x1230(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1815CE1F45277A3730258AB05EEF04D0;// 0x1278(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_686842DE46686BC7E045FEB96F008D36;// 0x12E8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A7C31CFA438ED1B904C7B2908F17398B;// 0x1330(0x00D8)
	unsigned char                                      UnknownData01[0x8];                                       // 0x1408(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CBAE1AEA4F6E1B956EE708BFE845F61F;// 0x1410(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9943E44D48B45820F869B08A949EB5E9;// 0x1490(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_781F85864A9933134FEEE9A846ADD20A;// 0x1510(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_857370F6480D937549EABD981BC062EC;// 0x1590(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A2C628F3480FCFD8C366A18A12177522;// 0x1610(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B3C6326446371608FAD375B301F76E222;// 0x1680(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A1EB68294746D46673313C92634CCE44;// 0x16C8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CBCA08B8432638CECA2D0D9907940E732;// 0x1738(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CC7E97EC47402D93D02FA99FEB5C8DA0;// 0x1780(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B3C6326446371608FAD375B301F76E22;// 0x17F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AE941CC1463090231DEE389D1C2F2FCB;// 0x1838(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CBCA08B8432638CECA2D0D9907940E73;// 0x18A8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_EDF3C1C54B85ACFC94651285313D7581;// 0x18F0(0x00D8)
	unsigned char                                      UnknownData02[0x8];                                       // 0x19C8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3836D5574449AB7804B7A7AEA0E7CCA3;// 0x19D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A0D03D5B474F4DCCEBB0F8B8DD7961F1;// 0x1A50(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B342E5DB4D6707E4491AC99E24AB80EB;// 0x1AD0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A9EBB7DE45F04AF66301FC9863F09DF7;// 0x1B50(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D2293E64459B3B9394885DB2E6B42E89;// 0x1BD0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_65D0F2934B5947EF27B4E7ABC60486002;// 0x1C40(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_691BA70143E303AD97E289A623A10152;// 0x1C88(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3D2CEA9245B6653A22BA4A9EFC10C5052;// 0x1CF8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6953A6EE4F88645B2BDD8394C69BBF5F;// 0x1D40(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_65D0F2934B5947EF27B4E7ABC6048600;// 0x1DB0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1BADCD834B0665852741568B9A69C609;// 0x1DF8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3D2CEA9245B6653A22BA4A9EFC10C505;// 0x1E68(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1D5C1B2A4D6479851BB5539688C5EC92;// 0x1EB0(0x00D8)
	unsigned char                                      UnknownData03[0x8];                                       // 0x1F88(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A40321B641F67993623D7EA0ABA3DE39;// 0x1F90(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_07CAD94845924636E5A4BC961385E5CA;// 0x2010(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5590B1714366E73ED8ADC1A668A0432B;// 0x2090(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E9D625934C41DCFA448902B27532D287;// 0x2110(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_27799DE94AF7CA81FF0D8D9086D5DB2F;// 0x2190(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_15143BB84FB022744E4BADA75FEC16782;// 0x2200(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E6943C914B0212DC1E8E21A0F74A110D;// 0x2248(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7E498D5244CF42DB8748479FB0A5796F2;// 0x22B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7707ED044E3E7C307FDDD7979FE6D57E;// 0x2300(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_15143BB84FB022744E4BADA75FEC1678;// 0x2370(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_844437E841026233278C579706A01A60;// 0x23B8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7E498D5244CF42DB8748479FB0A5796F;// 0x2428(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9723355A4CCEE5CCC04FEFBC736FA520;// 0x2470(0x00D8)
	unsigned char                                      UnknownData04[0x8];                                       // 0x2548(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9F7CEDBE4C092505E446B481F1F17466;// 0x2550(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_73A3537C4FFB43E28D4FA290A488168D;// 0x25D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CD52044747BED4AD50AE88B683DFF897;// 0x2650(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_53A9AD34432AF9D178B614877988BC25;// 0x26D0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_580073FF420454EB099E2389770BA126;// 0x2750(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3A3A7BA549CCA4A8999FB7B26FAA35912;// 0x27C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6E4A481B4C71ACEEF55A37B4A6291105;// 0x2808(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_144ED6F74C370D213116588B37878B412;// 0x2878(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1BF92DB245680CAA1F0B4CAA1542F642;// 0x28C0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3A3A7BA549CCA4A8999FB7B26FAA3591;// 0x2930(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3B63B0D44870AA5F1D40088A431B793E;// 0x2978(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_144ED6F74C370D213116588B37878B41;// 0x29E8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_E1B9B5D64CEEA61F8601ECA93329954D;// 0x2A30(0x00D8)
	unsigned char                                      UnknownData05[0x8];                                       // 0x2B08(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A2BD39254CAA95DECDC74AA45759BDDE;// 0x2B10(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8AFA03344BF984233160D9841F7FD8A6;// 0x2B90(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F31228E346A91806A1CB80934A78C8B3;// 0x2C10(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ECF39B8F4F7CEBF0E7855D888CD4D284;// 0x2C90(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A3DA581744C3AD38C5CAAD8DFF85E903;// 0x2D10(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D5593B9C45F09A6811D38EB5F99064162;// 0x2D80(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1C1BCB83420F83F6753184B2915B9155;// 0x2DC8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A883912640E5F8C1EADC43B0DCD30BDD2;// 0x2E38(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_586CF18A471E734ECECF58BAA8A60D46;// 0x2E80(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D5593B9C45F09A6811D38EB5F9906416;// 0x2EF0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0D30CCDF4224907613860F8E3DEBC28D;// 0x2F38(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A883912640E5F8C1EADC43B0DCD30BDD;// 0x2FA8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6B97D5C14B2D518D2E5C6ABA4FFA72B6;// 0x2FF0(0x00D8)
	unsigned char                                      UnknownData06[0x8];                                       // 0x30C8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AB5663A94C93DE04C635C0A1CCD332EC;// 0x30D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2730BA354234673B507148A3F66395C6;// 0x3150(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_605B637249B4F781CA5966980D0479B3;// 0x31D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F6284B96417D3DC4A3729EBF49928949;// 0x3250(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1C1E9C4C4AAE996CC300C89F46280A93;// 0x32D0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C3AD424746F40C0EB0599680CD8B77712;// 0x3340(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F2646134490939EB12D77799A86C2D1D;// 0x3388(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_120D5B5B4CD53A1BA37AED8940CAEEE52;// 0x33F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F6C362024C150533AD33989B87D5DBD5;// 0x3440(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C3AD424746F40C0EB0599680CD8B7771;// 0x34B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_63DC1CF94097E52C568840B326CF8B37;// 0x34F8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_120D5B5B4CD53A1BA37AED8940CAEEE5;// 0x3568(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C8A2D573485056B032ADAE957FB5741D;// 0x35B0(0x00D8)
	unsigned char                                      UnknownData07[0x8];                                       // 0x3688(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9EAC151B49E9B6F6BFF551A6D79CCDE7;// 0x3690(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_708AB39F4F8A1380F3936CA52C804DA0;// 0x3710(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_716F3D884C14B63C1FF9C1A2A55BC9B8;// 0x3790(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_74331A0B4831CF7A09677CAF49F2C281;// 0x3810(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BB843FA44FCB539ADFD24F9EAE278DEE;// 0x3890(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_58137BCE42A49CD9428975BA7AFD3BE92;// 0x3900(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A21F9B4043C29E291FD41B9067804219;// 0x3948(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_66B0DAD248AB50BA554D92B608CD13B32;// 0x39B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11E036734AB1FFD88A3AE2B3385DF425;// 0x3A00(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_58137BCE42A49CD9428975BA7AFD3BE9;// 0x3A70(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4A7581C349769333B259F987C22594A1;// 0x3AB8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_66B0DAD248AB50BA554D92B608CD13B3;// 0x3B28(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_822A97434374B5D0D1E910919EF0458E;// 0x3B70(0x00D8)
	unsigned char                                      UnknownData08[0x8];                                       // 0x3C48(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_817F1A0A4D8E67DF0CF5A2BF3B663784;// 0x3C50(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BC74D9134BB25433B0FF2494B3B2DA7B;// 0x3CD0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C5A223BA49DE4F96EFC8619682109D6A;// 0x3D50(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_72DECB514F79DD26176541A124A25523;// 0x3DD0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A96FC1C6400EFA4FF16B11AE8B44BC1E;// 0x3E50(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6F03644C45A9DE721E8DBCBF3248C7322;// 0x3EC0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2CA090CD41B6DAF2B7CA5B9610DC7604;// 0x3F08(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_82C49B6242EF616F2A2891AEEDA33BED2;// 0x3F78(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FE8E5012409132569DFF0C86259EAB4B;// 0x3FC0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6F03644C45A9DE721E8DBCBF3248C732;// 0x4030(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_226C992A455299A2576D2D9A5AA81AB9;// 0x4078(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_82C49B6242EF616F2A2891AEEDA33BED;// 0x40E8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_241D4BAF47A3449CFF8B829F053E94CC;// 0x4130(0x00D8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_10125A1445B0F0CC9F36D281BD305C2B;// 0x4208(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_D393B00B41334908DDFFCCAA3AA81097;// 0x4280(0x00E0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_C1C502164D29AB956D914D85DB64D29A;// 0x4360(0x0038)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_70690E1E4AB99BF80CC4328FB4F395C9;// 0x4398(0x0038)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_111584C346E2C97EBCED73A9A8145F05;// 0x43D0(0x0038)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_BD74F30F452193F45C36179951EA0C43;// 0x4408(0x0038)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_E05750FD4E174A8E7CFD4CB1D7F15A44;// 0x4440(0x0038)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_0D1FB5F04FDD2EDACEA78F9640DE9053;// 0x4478(0x0038)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_0FE9901E499AF2D0A277F89C54B560EA;// 0x44B0(0x0038)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_78849D5647096CF15F7B1FBE74B147ED;// 0x44E8(0x0038)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_5AD237FB464018B07CC0768192DBFD5E;// 0x4520(0x0038)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9C8FD0EF46D641025BDCDAACEC3BABAB;// 0x4558(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_76E7C1424CAE0ED971B2758195CBBF94;// 0x4638(0x00E0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_FCBC9C474CFFC4BE4DC23B81E27E61F1;// 0x4718(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1545C6104F6C5BC994C837B83B971F05;// 0x4750(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_78B9624447E273E1F0262B85058DED1F;// 0x4808(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D973D8BD48208760EE684D8FBBB9D104;// 0x4850(0x0048)
	bool                                               InjectorActive_Desired;                                   // 0x4898(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ModuleActive_Desired;                                     // 0x4899(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x489A(0x0002) MISSED OFFSET
	struct FRotator                                    SpinAngle;                                                // 0x489C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               InjectorActiveTransitioning;                              // 0x48A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ModuleActiveTransitioning;                                // 0x48A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpinnerAngleTransitioning;                                // 0x48AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x5];                                       // 0x48AB(0x0005) MISSED OFFSET
	TArray<bool>                                       CansActive_AnimState;                                     // 0x48B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       CansTransitioning;                                        // 0x48C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               InjectorActive_AnimState;                                 // 0x48D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ModuleActive_AnimState;                                   // 0x48D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Can1Active_Desired;                                       // 0x48D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Can2Active_Desired;                                       // 0x48D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Can3Active_Desired;                                       // 0x48D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Can4Active_Desired;                                       // 0x48D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Can5Active_Desired;                                       // 0x48D6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Can6Active_Desired;                                       // 0x48D7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Can7Active_Desired;                                       // 0x48D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Can8Active_Desired;                                       // 0x48D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BaseSediment_AnimBP.BaseSediment_AnimBP_C");
		return ptr;
	}


	void GetCanActiveDesired(int Index, bool* IsActive);
	void CanTransitionFinished(int Index, bool IsActive);
	void TryDisableSkeletonUpdates();
	void SetIsAnimatingSpinner(bool IsAnimatingSpinner);
	void SetModuleActive(bool NewModuleActive);
	void SetInjectorActive(bool NewInjectorActive);
	void SetSpinnerAngle(float NewSpinnerAngle);
	void SetCanActive(int CanIndex, bool IsActive);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseSediment_AnimBP_AnimGraphNode_TransitionResult_53A9AD34432AF9D178B614877988BC25();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseSediment_AnimBP_AnimGraphNode_TransitionResult_E9D625934C41DCFA448902B27532D287();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseSediment_AnimBP_AnimGraphNode_TransitionResult_A2BD39254CAA95DECDC74AA45759BDDE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseSediment_AnimBP_AnimGraphNode_TransitionResult_A40321B641F67993623D7EA0ABA3DE39();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseSediment_AnimBP_AnimGraphNode_TransitionResult_ECF39B8F4F7CEBF0E7855D888CD4D284();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseSediment_AnimBP_AnimGraphNode_TransitionResult_AB5663A94C93DE04C635C0A1CCD332EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseSediment_AnimBP_AnimGraphNode_TransitionResult_A9EBB7DE45F04AF66301FC9863F09DF7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseSediment_AnimBP_AnimGraphNode_TransitionResult_F6284B96417D3DC4A3729EBF49928949();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseSediment_AnimBP_AnimGraphNode_TransitionResult_3836D5574449AB7804B7A7AEA0E7CCA3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseSediment_AnimBP_AnimGraphNode_TransitionResult_9EAC151B49E9B6F6BFF551A6D79CCDE7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseSediment_AnimBP_AnimGraphNode_TransitionResult_74331A0B4831CF7A09677CAF49F2C281();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseSediment_AnimBP_AnimGraphNode_TransitionResult_857370F6480D937549EABD981BC062EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseSediment_AnimBP_AnimGraphNode_TransitionResult_817F1A0A4D8E67DF0CF5A2BF3B663784();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseSediment_AnimBP_AnimGraphNode_TransitionResult_CBAE1AEA4F6E1B956EE708BFE845F61F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseSediment_AnimBP_AnimGraphNode_TransitionResult_72DECB514F79DD26176541A124A25523();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseSediment_AnimBP_AnimGraphNode_TransitionResult_9F94A665489563621C51DB8F9D1B1162();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseSediment_AnimBP_AnimGraphNode_ModifyBone_1545C6104F6C5BC994C837B83B971F05();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseSediment_AnimBP_AnimGraphNode_TransitionResult_225DA34F49B5A83E8AD94EB536B5D219();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseSediment_AnimBP_AnimGraphNode_TransitionResult_D90F445144CB3BD9299E19A2BFEC5C52();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseSediment_AnimBP_AnimGraphNode_TransitionResult_9F7CEDBE4C092505E446B481F1F17466();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseSediment_AnimBP_AnimGraphNode_TransitionResult_4F11DF404A5197D4ECBD988864417479();
	void AnimNotify_Can1StartTransition();
	void AnimNotify_Can2StartTransition();
	void AnimNotify_Can3StartTransition();
	void AnimNotify_Can4StartTransition();
	void AnimNotify_Can5StartTransition();
	void AnimNotify_Can6StartTransition();
	void AnimNotify_Can7StartTransition();
	void AnimNotify_Can8StartTransition();
	void AnimNotify_Can1UpTransitionFinished();
	void AnimNotify_Can1DownTransitionFinished();
	void AnimNotify_Can2UpTransitionFinished();
	void AnimNotify_Can2DownTransitionFinished();
	void AnimNotify_Can3UpTransitionFinished();
	void AnimNotify_Can3DownTransitionFinished();
	void AnimNotify_Can4UpTransitionFinished();
	void AnimNotify_Can4DownTransitionFinished();
	void AnimNotify_Can5UpTransitionFinished();
	void AnimNotify_Can5DownTransitionFinished();
	void AnimNotify_Can6UpTransitionFinished();
	void AnimNotify_Can6DownTransitionFinished();
	void AnimNotify_Can7UpTransitionFinished();
	void AnimNotify_Can7DownTransitionFinished();
	void AnimNotify_Can8UpTransitionFinished();
	void AnimNotify_Can8DownTransitionFinished();
	void BlueprintBeginPlay();
	void AnimNotify_InjectorDownTransitionFinished();
	void AnimNotify_InjectorUpTransitionFinished();
	void AnimNotify_InjectorStartTransition();
	void AnimNotify_FillerStartTransition();
	void AnimNotify_FillerOutTransitionFinished();
	void AnimNotify_FillerInTransitionFinished();
	void ExecuteUbergraph_BaseSediment_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
